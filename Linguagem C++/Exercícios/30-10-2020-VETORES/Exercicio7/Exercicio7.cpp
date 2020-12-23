#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> 

using namespace std;

int main()
{
    vector<int> vetor;
    int tmp = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite um valor: " << endl;
        cin >> tmp;
        vetor.push_back(tmp);
    }

    for (int i = 0; i < 10; i++) {
        cout << "Você digitou: " << vetor[i] << endl;
    }

    auto maximo = max_element(begin(vetor), end(vetor));

    for (int i = 0; i < size(vetor); i++) {
        if (vetor[i] == *maximo) {
            cout << "O maior elemento se encontra na posicao vetor[" << i << "]" << endl;
            break;
        }
    }

}