#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int vet[6];
    int i = 0;
    int tmp = 0;
    while(i < 6) {
        cout << "Digite um numero: " << endl;
        cin >> vet[i];
        if ((vet[i] % 2) == 0) {
            i++;
        }
        else {
            cout << "numero não é par, digite novamente !" << endl;
        }
    }

    for (int i = 5; i >= 0; i--) {
        cout << "Você digitou: " << vet[i] << endl;
    }
}