#include <iostream>
#include <locale.h>

using namespace std;


int main(void)
{
    setlocale(LC_ALL, ".utf8");
    int i = 0;
    int z[10];
    while (i < 10) {
        cout << "Digite um número: " << endl;
        cin >> z[i];
        i++;
    }

    i = 0;
    while (i < 10) {
        if (z[i] < 0) {
            cout << "O NÚMERO DIGITADO: " << z[i] << " É NEGATIVO !";
        }
        i++;
    }
}