#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");

	char letra;

    cout << "Informe uma letra: " << endl;
	letra = getchar(); //pega só um char :D

	switch (letra)
	{
		case 'q':
			cout << "Sair do Sistema" << endl;
			exit(1);
			break;
		case 'Q':
			cout << "Sair do Sistema" << endl;
			break;
	default:
		break;
	}
}
