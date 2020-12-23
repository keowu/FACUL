#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int A[6] = { 1, 0, 5, -2, -5, 7 };
    int soma = A[0] + A[1] + A[5];
    cout << soma << endl;
    A[4] = 100;
    for(int i = 0; i < 6; i++){
        cout << "Posição " << i << " Valor: " << A[i] << endl;
    }
}