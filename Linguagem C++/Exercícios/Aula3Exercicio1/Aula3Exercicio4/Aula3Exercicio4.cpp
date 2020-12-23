#include <iostream>
#include <locale.h>

using namespace std;

int main(void)
{
    setlocale(LC_ALL, ".utf8");
    int n = 0, i = 0;
    cout << "Digite um número: " << endl;
    cin >> n;
    while (i++ < n) {
        cout << i << "º" << endl;
    }
}