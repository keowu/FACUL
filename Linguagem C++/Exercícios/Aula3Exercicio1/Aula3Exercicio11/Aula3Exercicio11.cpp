#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");
    
    int alun_tot = 0;
    float notas = 0;
    float tmp;
    cout << "Digite o número de alunos da sua turma: " << endl;
    cin >> alun_tot;
    for (int i = 0; i < alun_tot; i++) {
        for (int i = 0; i < 10; i++) {
            cout << "Digite a " << (i + 1) << "º nota" << endl;
            cin >> tmp;
            notas += tmp;
        }

        cout << "A média do "  << (i+1) << "º aluno " << "é " << (notas / 10) << endl;
        notas = 0;
    }
}