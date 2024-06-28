#include <iostream>
#include <string>
#include <locale>

/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a média dessas notas*/

int main() {

	setlocale(LC_ALL, "portuguese");

	float[5] {1, 2, 3, 4, 5};
	float NotaMedia;
	float RecebeTotalDasNotas;
	std:: string NomeDoAluno;

	std::cout << "Digite seu nome: ";
	std::cin >> NomeDoAluno;

	std::cout << "\n Digite a Primera nota: ";
	std::cin >> Nota1;

	std::cout << "\n Digite a Segunda nota: ";
	std::cin >> Nota2;

	std::cout << "\n Digite a Terceira nota: ";
	std::cin >> Nota3;

	std::cout << "\n Digite a Quarta nota: ";
	std::cin >> Nota4;

	std::cout << "\n Digite a Quinta nota: ";
	std::cin >> Nota5;
					

	RecebeTotalDasNotas = Nota1 + Nota2 + Nota3 + Nota4 + Nota5;

	std::cout << "\n Essa é a soma de todas as suas notas: " << RecebeTotalDasNotas << '\n';
	
	NotaMedia = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5)  / 5;

	std::cout << "Esssa é a media das suas notas: " << NotaMedia << ", " << NomeDoAluno;
	
	return 0;


}