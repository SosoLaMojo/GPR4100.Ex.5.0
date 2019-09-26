#include <iostream>
#include <time.h>
#include <random>

/*EXERCICE 5.0
Rendu Git
Créer un repository Git appelé GPR4100.Ex.5.0. N’oubliez pas d’inclure un .gitignore conçu pour le c++.
À l'intérieur il faut faire un programme qui simule une partie de feuille - cailloux - ciseau.
Cette fois-ci l’accent doit être mis sur faire un code propres en utilisant tout ce qui a été vu en cours.
N’oubliez pas de créer un readme et d’expliquer brièvement le programme.
*/

int choixOrdi() {

	srand(time(0));

	int choixMax = 3 ;
	int choix = rand() % choixMax;
	

	switch (choix) {

	case 0:
		std::cout << "Feuille \n";
		break;

	case 1:
		std::cout << "Cailloux \n";
		break;

	case 2 :
		std::cout << "Ciseaux \n";
		break;
	}

	return choix;

}

void testCombinaison(int choix1, int choix2, bool &gagnant) {

	if ((choix1 == 0 && choix2 == 1) || (choix1 == 1 && choix2 == 2) || (choix1 == 2 && choix2 == 0)) {
		
		std::cout << "L'ordi GAGNE! \n";

		gagnant = true;
	}

	else if ((choix1 == 1 && choix2 == 0) || (choix1 == 2 && choix2 == 1) || (choix1 == 0 && choix2 == 2)) {

		std::cout << "Vous avez GAGNE! \n";

		gagnant = true;

	}
	else if (choix1 == choix2) {

		std::cout << "EGALITE! \n";

	}
}


int main() {

	bool gagnant = false;
	int ordiA = 0;
	int choixJoueur = 0;

	while (!gagnant) {

		std::cout << "Choissisez entre\n Feuille = 0 \n Cailloux = 1 \n Ciseaux = 2 \n";
		std::cin >> choixJoueur;

		ordiA = choixOrdi();

		testCombinaison(ordiA, choixJoueur, gagnant);

	}

	system("pause");
	return EXIT_SUCCESS;
}