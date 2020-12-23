#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    std::cout << "Hello World!\n";
    int i = 10;
    while (i >= 1) {
        cout << "Número: " << --i << endl;
    }
}