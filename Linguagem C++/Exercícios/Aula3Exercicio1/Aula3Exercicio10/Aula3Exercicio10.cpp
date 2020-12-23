#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    float notas = 0;
    float tmp;
    for (int i = 0; i < 10; i++) {
        cout << "Digite a " << (i+1) << "º nota" << endl;
        cin >> tmp;
        notas += tmp;
    }
    
    cout << "A média aritimética é " << (notas / 10) << endl;
}
