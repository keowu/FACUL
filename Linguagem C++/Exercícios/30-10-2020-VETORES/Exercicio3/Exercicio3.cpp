#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
		int a[10], b[10], i;  
		for (i = 0; i < 10; i++) {
			cout << "Entre com o " << i << "º Número: " << endl;
			cin >> a[i];
		}
		for (i = 0; i < 10; i++) {
			b[i] = a[i] * a[i];
		}
		cout << "Primeiro Conjunto:" << endl;
		for (i = 0; i < 10; i++) {
			cout << a[i] << endl;
		}
		cout << "Segundo Conjunto:" << endl;
		for (i = 0; i < 10; i++) {
			cout << b[i] << endl;
		}
}