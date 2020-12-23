#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");


    for (int i = 1; i <= 10; i++) {
        cout << "__________________TABUADA DO " << i << "_____________________" << endl;
        for (int z = 1; z <= 10; z++) {
            cout << i << "*" << z << "=" << (i * z) << endl;
        }
        cout << "_____________________________________________________________" << endl;
    }

}