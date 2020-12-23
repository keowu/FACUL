#include <iostream>
#include <locale.h>

using namespace std;

// RECURSIVIDADE
int fatorial(int n) {
    if ((n == 1) || (n==0)) {
        return 1;
    }
    else {
        return n * fatorial(n - 1);
    }
}

int main()
{
    setlocale(LC_ALL, ".utf8");
    int num = 0;
    cout << "Digite um número: ";
    cin >> num;

   cout << fatorial(num);

   cout << endl;

   cout << "Digite um número: ";
   cin >> num;

   int fatorial = 1;
   for (float i = num; i > 0; i--) {
       fatorial = fatorial * i;
   }

   cout << "Fatorial é " << fatorial << endl;
}