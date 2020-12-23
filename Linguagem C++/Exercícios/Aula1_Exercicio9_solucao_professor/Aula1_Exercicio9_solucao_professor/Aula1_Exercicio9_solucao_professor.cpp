#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int a = 0, b = 0, c = 0;
    cout << "Informe o primeiro valor: " << endl;
    cin >> a;
    cout << "Informe o segundo valor: " << endl;
    cin >> b;
    cout << "Informe o terceiro valor: " << endl;
    cin >> c;
    if (a < b ) {
        if (b < c) {
            cout << a << " " << b << " " << c << endl;
        }
        else if (a < c) {
            cout << a << " " << c << " " << b << endl;
        }
        else {
            cout << c << " " << a << " " << b << endl;
        }
    }
    else if (b < c) {
        if (a < c) {
            cout << b << " " << a << " " << c << endl;
        }
        else {
            cout << b << " " << c << " " << a << endl;
        }
    }
    else {
        cout << c << " " << b << " " << a << endl;
    }
}