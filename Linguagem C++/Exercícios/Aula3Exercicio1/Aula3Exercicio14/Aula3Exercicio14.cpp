#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int a = 0, b = 0, soma = 0;

    cout << "Digite um primeiro número: " << endl;
    cin >> a;
    cout << "Digite um segundo número: " << endl;
    cin >> b;

    for (int i = a; i <= b; i++) {
        soma += i;
    }

    cout << "A soma dos números entre " << a << " e " << b << " é igual a " << soma << endl;
}