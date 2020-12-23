#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int n = 0, i = 0;
    a: //:D
    cout << "Digite um número: " << endl;
    cin >> n;
    if (n <= 0) { goto a; } //EU falei que eu não curto muito laços kk
    while (i++ < n) {
        cout << i << "º" << endl;
    }
}