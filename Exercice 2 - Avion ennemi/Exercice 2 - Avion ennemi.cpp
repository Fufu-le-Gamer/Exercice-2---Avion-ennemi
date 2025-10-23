

#include <iostream>

int main()
{
	float a;
	float b;
	float c;
	bool reponse = true;

	while (reponse) {
		std::cout << "Valeur de a: ";
		std::cin >> a;
		std::cout << "Valeur de b: ";
		std::cin >> b;
		std::cout << "Valeur de c: ";
		std::cin >> c;
		if (a * 10 * 10 + b * 10 + c > 0) {
			std::cout << "L'avion ennemi passe au dessus";
		}
		else if (a * 10 * 10 + b * 10 + c < 0) {
			std::cout << "L'avion ennemi passe en dessous";
		}
		else {
			std::cout << "L'avion entre en collision avec l'IA";
		}
		std::cout << "\n";
		std::cout << "Rejouez ?";
		std::cin >> reponse;
	}
}
