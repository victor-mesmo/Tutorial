#include <iostream>
#include <string>

using namespace std;

int main()
{
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	cout << " o         o" << endl;
	cout << ".T./     \\.T." << endl;
	cout << " ^         ^" << endl;
	cout << jog1 << "     " << endl;
	cout << "Vida: " << vida1 << "    " << "Vida: " << vida2 << endl;

	int dado6;
	srand(1234);
	dado6 = rand() % 100 + 1;
	vida1 = vida1 - dado6;
	dado6 = rand() % 100 + 1;
	vida2 = vida2 - dado6;

	cout << "vida: " << vida1 << "vida: " << vida2 << endl;







	return 0;

}