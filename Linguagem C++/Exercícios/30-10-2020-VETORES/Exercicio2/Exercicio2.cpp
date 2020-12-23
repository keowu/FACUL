#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int b[6];
    for (int i = 0; i < 6; i++) {
        cout << "Digite o " << (i + 1) << "º Número" << endl;
        cin >> b[i];
    }
    cout << "Você digitou: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << (i + 1) << "º você digitou: " << b[i] << endl;
    }
}