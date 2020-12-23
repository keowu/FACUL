#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int n = 0; 
    cout << "Informe um valor: ";
    cin >> n;
    for (int i = 0; i <= 10; i++) {
        cout << i << "*" << n << "=" << i * n << endl;
    }
    cout << endl;
    cout << "Ao contrário: " << endl;
    cout << endl;
    for (int i = 10; i >= 0; i--) {
        cout << i << "*" << n << "=" << i * n << endl;
    }
}