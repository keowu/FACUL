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

    auto minimo = min_element(begin(vetor), end(vetor));
    auto maximo = max_element(begin(vetor), end(vetor));
    if (end(vetor) != minimo)
        cout << *minimo << '\n';
    if (std::end(vetor) != maximo)
        cout << *maximo << endl;
}