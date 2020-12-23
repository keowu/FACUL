#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    float total_valor = 0, tmp = 0, contador = 0;
    char resposta;
    flag:
    cout << "Digite o valor do Produto: " << endl;
    cin >> tmp;
    total_valor += tmp;
    contador++;

    cout << "Vai ler mais mercadorias ?" << endl;
    cin >> resposta;
    if ((resposta == 'S') || (resposta == 's')) {
        goto flag;
    }

    cout << "O Valor total em estoque é de R$" << total_valor << ", e a média dos valores é de " << (total_valor / contador) << endl;
    cout << "Deseja ler mais valores ?" << endl;
}