#include <iostream>
#include <string>

using namespace std;

int main(int arg, char* args[])
{
	string nome;
	string classe;
	char inicial;


	cout << "Digite o nome do personagem:" << endl;
	cin >> nome;
	inicial = nome[0];
	cout << "Digite a sua classe" << endl;
	cin >> classe;
	cout << "Personagem" << inicial << ". " << nome << endl;
	cout << "Classe" << classe << endl;

	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;
	int vida = 65, vida_maxima = 110;

	cout << "Status:" << endl;
	cout << "Ataque :" << ataque << "Defesa :" << defesa << endl;
	cout << "Magica" << ataque << "def_magica" << def_magica << endl;

	cout << "Vida " << vida << " / " << vida_maxima << endl;


	double perc_vida = (vida * 100) / vida_maxima;
	cout << "Vida :" << perc_vida << "%" << endl;

	cout << " o " << endl;
	cout << ".T. " << endl;
	cout << " ^ " << endl;

	return 0;
}