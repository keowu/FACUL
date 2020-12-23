#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".utf8");
	for (int i = 1; i <= 10; i++) {
		cout << "(" << i << " ,";
		for (int j = 0; j <= 10; j++) {
			cout << j << " ";
		}
		cout << ")" << endl;
	}
}