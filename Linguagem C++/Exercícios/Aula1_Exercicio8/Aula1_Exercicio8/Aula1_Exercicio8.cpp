#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");

    int a = 0, b = 0, c = 0;
    cout << "Informe o primairo lado: ";
    cin >> a;
    cout << "Informe o segundo lado: ";
    cin >> b;
    cout << "Informe o terceiro lado: ";
    cin >> c;

    if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))) {
        if ((a == b) && (b = c)) {
            cout << "Triângulo Equilátero";
        }
        else if ((a==b)||(b==c)||(a==c)) {
            cout << "Triângulo Isoceles";
        }
        else {
            cout << "Triângulo Escaleno";
        }
    }
    else {
        cout << "Não é um triangulo";
    }

    return 0;
}