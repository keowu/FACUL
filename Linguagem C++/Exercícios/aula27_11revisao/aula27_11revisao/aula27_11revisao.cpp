#include <iostream>
#include <vector>

using namespace std;


void tabuada() {
    int n = 0;
    cout << "Digite um número: " << endl;
    cin >> n;
    for (int i = 0; i < 10; i++) {
        cout << i << "x" << n << "=" << i * n << endl;
    }
}


typedef struct numero {
    int num;
};


void num(numero *numero) {
    cout << "Digite um número: " << endl;
    cin >> numero->num;
    if (numero->num > 0) {
        cout << "Positivo !" << endl;
        if ((numero->num % 2) == 0)
            cout << "Par !" << endl;
        else
            cout << "Impar !" << endl;
    }
    else if (numero->num < 0) {
        cout << "Negativo !" << endl;
        if ((numero->num % 2) == 0)
            cout << "Par !" << endl;
        else
            cout << "Impar !" << endl;
    }
    else {
        cout << "Neutro !" << endl;
        cout << "PAR !" << endl;
    }
}



typedef struct aluno {
    std::string nome;
    vector<float>notas;
};


float mediaCalc(aluno **notas) {return ((*notas)->notas.at(0) + (*notas)->notas.at(1) + (*notas)->notas.at(2))/3;}

void notaAluno(aluno *aluno) {
    int i = 0;
    float tmp = 0;
    cout << "Digite o nome do aluno: " << endl;
    cin >> aluno->nome;
    while (i++ < 3) {
        cout << "Digite a nota do aluno: " << endl;
        cin >> tmp;
        aluno->notas.push_back(tmp);
    }
    cout << mediaCalc(&aluno) << endl;
}

int main()
{
    aluno aluno;
    notaAluno(&aluno);
    numero numero;
    num(&numero);
    tabuada();
}
