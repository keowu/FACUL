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
        cout << "Digite um número: " << endl;
        cin >> tmp;
        vetor.push_back(tmp);
    }

    auto minimo = min_element(begin(vetor), end(vetor));
    auto maximo = max_element(begin(vetor), end(vetor));

    int min = NULL;
    int max = NULL;
    for (int i = 0; i < 5; i++) {
        
        if ((min != NULL) && (max != NULL)) {
            break;
        }

        if (vetor[i] == *minimo) {
            min = i;
        }
        else if (vetor[i] == *maximo) {
            max = i;
        }
    }

    cout << "O Máximo está localizado em vetor[" << max << "]" << endl;
    cout << "O Minimo está localizado em vetor[" << min << "]" << endl;
}