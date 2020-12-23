#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8"); // Exclusivo visual studio 2019
    int a = 0, b = 0, c=0;
    cout << "Entre com primeiro número: " << endl;
    cin >> a;
    cout << "Entre com segundo número: " << endl;
    cin >> b;
    cout << "Entre com terceiro número: " << endl;
    cin >> c;

    if (a <= b && b <= c)
    {
        cout << "A ordem é " << a << " " << b << " " << c << endl;
    }
    else if (a <= c && c <= b)
    {
        cout << "A ordem é " << a << " " << c << " " << b << endl;
    }
    else if (b <= a && a <= c)
    {
        cout << "A ordem é " << b << " " << a << " " << c << endl;
    }
    else if (b <= c && c <= a)
    {
        cout << "A ordem é " << b << " " << c << " " << a << endl;
    }
    else if (c <= a && a <= b)
    {
        cout << "A ordem é " << c << " " << a << " " << b << endl;
    }
    else
    {
        cout << "A ordem é " << c << " " << b << " " << a << endl;
    }

    std::cout << "AOOOOOOOOOOOOOOO JÚLIO ACABOU !!\n";
}
