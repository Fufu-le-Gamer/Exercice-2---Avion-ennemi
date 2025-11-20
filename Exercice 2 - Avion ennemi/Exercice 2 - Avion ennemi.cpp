

#include <iostream>

int main()
{
	float a;
	float b;
	float c;
	float x0;
	float x1;
	float x2;
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

		float delta = b * b - 4 * a * c;
		
		if(delta > 0) {
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			std::cout << "L'IA tire en x1 = " << x1 << " et x2 = " << x2 << "\n";
		}
		else if(delta == 0) {
			x0 = -b / (2 * a);
			std::cout << "L'IA tire en x0 = " << x0 << "\n";
		}
		else {
			float alpha = -b / (2 * a);
			float beta = a * alpha * alpha + b * alpha + c;
			std::cout << "L'IA tire en (" << alpha << ", " << beta << ")\n";
		}
		std::cout << "\n";
		std::cout << "Rejouez ?";
		std::cin >> reponse;
	}
}
