#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int vetor[8];
    for (int i = 0; i < 8; i++) {
        cout << "Digite um valor: " << endl;
        cin >> vetor[i];
    }
    int x = 0, y = 0;
    cout << "Digite uma posição para o vetor: " << endl;
    cin >> x;
    cout << "Digite uma segunda posição para o vetor: " << endl;
    cin >> y;
    int soma = vetor[x] + vetor[y];
    cout << "Valor encontrado: " << soma << endl;
}