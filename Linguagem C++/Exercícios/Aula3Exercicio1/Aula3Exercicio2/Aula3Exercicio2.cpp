#include <iostream>
#include <locale.h>
#define pc_fala(palavra) cout << palavra << endl;

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int i = 11; // HEHE 1 A MAIS PARA PODERMOS CONTAR A PARTIR DE 10 :D
    while (i-- > 1) { pc_fala(i); }
}