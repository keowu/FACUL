#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int num[10], quarenta = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite um " << (i+1) << "º número: " << endl;
        cin >> num[i];
    }

    for (int i = 0; i < 10; i++) {
        if (num[i] < 40) {
            quarenta += num[i];
        }
    }

    cout << "A soma dos números menores que 40 é " << quarenta << endl;
}