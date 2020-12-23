#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");

    int numero = 0;

    cout << "Informe um número: " << endl;
    cin >> numero;

    int i = 0;
    while (i++ < 10) { cout << i << "*" << numero << "=" << i*numero << endl; }

    return 0;
}
