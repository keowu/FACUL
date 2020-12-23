#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    int qtd = 0;
    float total_valor = 0, tmp = 0;
    cout << "Digite a quantidade de produtos no estoque: " << endl;
    cin >> qtd;
    for (int i = 1; i <= qtd; i++) {
        cout << "Digite o valor do " << i << "º Produto: " << endl;
        cin >> tmp;
        total_valor += tmp;
    }

    cout << "O Valor total em estoque é de R$" << total_valor << ", e a média dos valores é de " << (total_valor / qtd) << endl;
}