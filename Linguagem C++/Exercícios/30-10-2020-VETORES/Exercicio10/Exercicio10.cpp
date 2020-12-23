#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    float notas_alunos[15];
    for (int i = 0; i < 15; i++) {
        cout << "Digite a nota do " << i << "º aluno: " << endl;
        cin >> notas_alunos[i];
    }

    float somatoria = 0;

    for (int i = 0; i < 15; i++) { somatoria += notas_alunos[i]; };

    float media_geral = (somatoria / 15);

    cout << "A média geral é " << media_geral << endl;
}