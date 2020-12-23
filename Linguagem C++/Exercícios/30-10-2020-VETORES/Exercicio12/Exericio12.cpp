#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> 
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    vector<int> vetor;
    int tmp = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Digite um numero: " << endl;
        cin >> tmp;
        vetor.push_back(tmp);
    }

    auto maior = max_element(begin(vetor), end(vetor));
    auto menor = min_element(begin(vetor), end(vetor));
    cout << "O Maior elemento é " << *maior << endl;
    cout << "O Menor elemento é " << *menor << endl;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Você digitou: " << vetor[i] << endl;
        sum += vetor[i];
    }

    cout << "A média dos valores é: " << (sum / 5) << endl;
}