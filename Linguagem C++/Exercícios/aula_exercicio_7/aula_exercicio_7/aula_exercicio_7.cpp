#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    std::cout << "Hello World!\n";

    int idade = 0;
    cout << "Informe sua idade: " << endl;
    cin >> idade;
    cout << "Sua idade é " << idade << endl;
    if (idade < 18) {
        cout << "De Menor !";
    }
    else {
        cout << "De Maior !";
    }

    return 0;
}