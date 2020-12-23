#include <iostream>
#include <locale.h>
#define pc_fala(palavra) cout << palavra << endl;

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int i = 0;
    while (i++ < 10) { pc_fala("Contando -> " << i);}
}