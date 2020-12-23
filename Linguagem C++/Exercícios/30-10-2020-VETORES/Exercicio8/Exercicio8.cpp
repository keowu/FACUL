#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vet;
    int tmp = 0;
    for (int i = 0; i < 6; i++) {
        cout << "Digite um numero: " << endl;
        cin >> tmp;
        vet.push_back(tmp);
    }

    for (int i = 5; i >= 0; i--) {
        cout << "Valor: " << vet[i] << endl;
    }

}