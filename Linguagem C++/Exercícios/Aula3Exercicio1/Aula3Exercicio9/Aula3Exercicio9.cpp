#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int z[10];
    for (int i = 0; i < 10; i++) {
        cout << "Digite um número: " << endl;
        cin >> z[i];
    }

    for (int i = 0; i < 10; i++) {
        if ((z[i] >= 10) && (z[i] <= 20)) {
            cout << "O número que você digitou: " << z[i] << " Está na faixa de valores entre [10,20]" << endl;
        }
    }
}