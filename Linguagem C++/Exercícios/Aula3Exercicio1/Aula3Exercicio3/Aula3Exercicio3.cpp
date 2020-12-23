#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int i = 101;
    int j = 0;
    while (j++ < 10) {
        if (i>100) {
            cout << i << endl;
        }
        i++;
    }
}