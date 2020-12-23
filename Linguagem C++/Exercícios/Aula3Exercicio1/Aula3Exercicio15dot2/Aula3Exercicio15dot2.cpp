#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");

    int numero = 0;

    cout << "Digite um número: " << endl;
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        cout << "__________________TABUADA DO " << i << "_____________________" << endl;
        for (int z = 1; z <= 10; z++) {
            cout << i << "*" << z << "=" << (i * z) << endl;
        }
        cout << "_____________________________________________________________" << endl;
    }

}