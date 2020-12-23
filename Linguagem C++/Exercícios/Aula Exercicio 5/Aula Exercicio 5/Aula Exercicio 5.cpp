#include <iostream>

using namespace std;

int main()
{
	char letra = 'a';
	char letra2 = 'b';
	char palavra[] = "Olá mundo";

	int soma = letra + letra2;

	cout << palavra << endl;
	cout << letra << endl;
	cout << (int)letra << endl; // ASCII
	cout << soma; // Soma de chars em ACII

	return 0;
}