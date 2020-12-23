#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int num[10];
    int neg = 0, pos = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite um valor: " << endl;
        cin >> num[i];
        if (num[i] < 0) {
            neg++;
        }
        else {
            pos += num[i];
        }
    }

    cout << "Temos: " << neg << " Números que são negativos, e, a soma dos positivos é de: " << pos << endl;
}