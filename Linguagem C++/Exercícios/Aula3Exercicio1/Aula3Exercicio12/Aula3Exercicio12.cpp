#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int num = 0, tmp = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << (i+1) << "º Número: " << endl;
        cin >> tmp;
        num += tmp;
    }
    cout << "A soma total é " << num << endl;
}