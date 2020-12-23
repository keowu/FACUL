#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    std::cout << "Hello World!\n";
    /*
    int i = 0;
    while (i < 10) {
        cout << "Número: " << ++i << endl;
    }

    for (int i = 1; i <= 10; i++) {
        cout << "Número COM FOR: " << i << endl;
    }
    

    int i = 10;
    while (i >= 1) {
        cout << "Número: " << --i << endl;
    }


    for (int i = 10; i >= 1; i--) {
        cout << "Número[FOR]: " << i << endl;
    }

    int contador = 101;
    while (contador <= 110) {
        cout << "Número: " << contador << endl;
        contador++;
    }

    for (int i = 101; i <= 110; i++) {
        cout << "Número[FOR]: " << i << endl;
    }

    */


}