#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".utf8");
	int valores[10];
	for (int i = 0; i < 10; i++) {
		cout << "Digite um numero: " << endl;
		cin >> valores[i];
	}


	int par = 0;

	for (int i = 0; i < 10; i++) {
		if ((valores[i] % 2) == 0) {
			par++;
		}
	}

	cout << "O vetor possui " << par << " valores pares !";
}