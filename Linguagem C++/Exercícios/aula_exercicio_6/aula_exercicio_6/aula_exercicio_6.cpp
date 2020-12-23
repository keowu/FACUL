#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int idade = 0;
    cout << "Informe sua idade: " << endl;
    cin >> idade;
    //scanf("%d", &idade); //lê idade no c
    cout << "Sua idade é: " << idade;

    return 0;
}