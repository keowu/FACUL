#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");

    cout << "Hello World!\n";

    int numero = 0;
    cout << "Informe um número: " << endl;
    cin >> numero;

    if (numero == 1) {
        cout << "Número um";
    }
    else if (numero == 2) {
        cout << "Número dois";
    }
    else if (numero == 3) {
        cout << "Número três";
    }
    else if (numero == 4) {
        cout << "Número quatro";
    }
    else if(numero == 5) {
        cout << "Número cinco";
    }
    else {
        cout << "¯\_(ツ)_ / ¯";
    }
    cout << endl;
    switch (numero)
    {
        case 0:
            cout << "Zero ou Neutro";
            break;
        case 1:
            cout << "Número um";
            break;
        case 2:
            cout << "Número dois";
            break;
        case 3:
            cout << "Número três";
            break;
        case 4:
            cout << "Número quatro";
            break;
        case 5:
            cout << "Número cinco";
        default:
            cout << "¯\_(ツ)_ / ¯";
            break;
    }

    return 0;
}