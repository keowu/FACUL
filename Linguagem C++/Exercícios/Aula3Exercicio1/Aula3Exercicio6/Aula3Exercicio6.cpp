#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int i = 0, j = 0;
    cout << "Digite um número: " << endl;
    cin >> j;
    for (int i = 1; i <= 10; i++) {
        cout << j << "*" << i << "=" << (i*j) << endl;
    }
}