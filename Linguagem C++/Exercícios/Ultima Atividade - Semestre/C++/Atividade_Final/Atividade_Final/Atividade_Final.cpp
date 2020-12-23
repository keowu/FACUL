/*
MMMMSSSSSSSSSSSSSSSSSMSS;.     .dMMMMSSSSSSMMSSSSSSSSS
MMSSSSSSSMSSSSSMSSSSMMMSS."-.-":MMMMMSSSSMMMMSSMSSSMMS
MSSSSSSSMSSSSMMMSSMMMPTMM;"-/\":MMM^"     MMMSSMMMSSMM
SSSSSSSMMSSMMMMMMMMMP-.MMM :  ;.;P       dMMMMMMMMMP'
SSMSSSMMMSMMMMMMMMMP   :M;`:  ;.'+"""t+dMMMMMMMMMMP
MMMSSMMMMMMMMPTMMMM"""":P `.\// '    ""^^MMMMMMMP'
MMMMMMPTMMMMP="TMMMsg,      \/   db`c"  dMMMMMP"
MMMMMM  TMMM   d$$$b ^          /T$; ;-/TMMMP
MMMMM; .^`M; d$P^T$$b          :  $$ ::  "T(
MMMMMM   .-+d$$   $$$;         ; d$$ ;;  __
MMMMMMb   _d$$$   $$$$         :$$$; :MmMMMMp.
MMMMMM"  " T$$$._.$$$;          T$P.'MMMSSSSSSb.
MMM`TMb   -")T$$$$$$P'       `._ ""  :MMSSSMMP'
MMM / \    '  "T$$P"           /     :MMMMMMM
MMSb`. ;                      "      :MMMMMMM
MMSSb_lSSSb.      \ `.   .___.       MMMMMMMM
MMMMSSSSSSSSb.                     .MMMMMMMMM
MMMMMMMMMMMSSSb                  .dMMMMMMMMM'
MMMMMMMMMMMMMSS;               .dMMMMMMMMMMP
MMMMMMMMMMMMMb`;"-.          .dMMMMMMMMMMP'
MMMMMMMMMMMMMMb    ""--.___.dMMMMMMMMMP^"          SAMPAIO ESTEVE AQUI


ESSE TRABALHO FOI FEITO POR JOÃO VITOR SAMPAIO :)

HAPPY ASSEMBLY É HAPPY ASSEMBLY IS GOOD, ASSEMBLY É GOOD E NOIX HAVE


*/

#pragma warning(disable : 4996)
#pragma warning(disable : 26495)
#pragma warning(disable : 4091)
#include <iostream>
#include <stdio.h>
#include <chrono>
#include <ctime>
#include <locale.h>
#include <math.h>

using namespace std;

typedef struct pessoa{
    std::string nome;
    float anonasc;
    float idade;
    float ano;
    float mes;
    float semana;
    float dia;
    bool maior;
};

typedef std::chrono::system_clock Clock;

void idadeDePessoaExercicio1(pessoa *pessoa) {
    auto timestamp = Clock::now();
    std::time_t agora = Clock::to_time_t(timestamp);
    struct tm* timestamp_corrigido = std::localtime(&agora);
    cout << "Digite seu nome: " << std::endl;
    cin >> pessoa->nome;
    cout << "Digite seu ano de nascimento: " << std::endl;
    cin >> pessoa->anonasc;
    pessoa->idade = (1900 + timestamp_corrigido->tm_year) - pessoa->anonasc;
    cout << "O " << pessoa->nome << " e sua idade é " << pessoa->idade << endl;
    pessoa->ano = pessoa->idade * 365;
    cout << "Idade expressa em anos " << pessoa->ano << endl;
    pessoa->mes = pessoa->ano * 12;
    cout << "Idade expressa em meses " << pessoa->mes << endl;
    pessoa->semana = pessoa->mes / 7;
    cout << "Idade expressa em semanas " << pessoa->semana << endl;
    pessoa->dia = pessoa->semana * 30;
    cout << "Idade expressa em dias " << pessoa->dia << endl;
    pessoa->maior = pessoa->idade >= 18 ? 1 : 0;
    std::string tmp = (pessoa->maior) ? "É DE MAIOR !" : "É KID LAMMER";
    cout << "Você " << tmp << endl;
}


typedef struct numero_malucos {
    int n1;
    int n2;
    int aux;
};


void numerosDeMaluco(numero_malucos *maluco) {
    cout << "Digite um número: " << endl;
    cin >> maluco->n1;
    cout << "Digite um segundo número: " << endl;
    cin >> maluco->n2;
    maluco->aux = maluco->n1 + maluco->n2;
    maluco->aux = sqrt(maluco->aux);
    cout << "TOMA SEU NÚMERO: " << maluco->aux-(maluco->aux * 0.2) << endl;
}


typedef struct parimpar {
    int n;
    bool shit;
};

void numeroParImpar(parimpar *parparimpar) {
    cout << "Digite um número: " << endl;
    cin >> parparimpar->n;
    parparimpar->shit = (parparimpar->n % 2) == 0 ? 1 : 0; // se o resto for 0 par senão impar
    std::string res = parparimpar->shit ? "PAR" : "IMPAR ";
    cout << "O número " << parparimpar->n << " é " << res << endl;
}

typedef struct funcionario {
    std::string nome;
    float salario;
    float reajustado;
};

void GiveMEmyMoney(funcionario* moneyyyyyyyyyyy) {
    cout << "Digite seu nome: " << endl;
    cin >> moneyyyyyyyyyyy->nome;
    cout << "Digite seu salário: " << endl;
    cin >> moneyyyyyyyyyyy->salario;
    if (moneyyyyyyyyyyy->salario < 10000)
        moneyyyyyyyyyyy->reajustado = moneyyyyyyyyyyy->salario + (moneyyyyyyyyyyy->salario * 0.55);
    else if (moneyyyyyyyyyyy->salario >= 10000 && moneyyyyyyyyyyy->salario <= 25000)
        moneyyyyyyyyyyy->reajustado = moneyyyyyyyyyyy->salario + (moneyyyyyyyyyyy->salario * 0.2);
    else
        moneyyyyyyyyyyy->reajustado = moneyyyyyyyyyyy->salario + (moneyyyyyyyyyyy->salario * 0.25);
    cout << "Caro " << moneyyyyyyyyyyy->nome << " seu salário era de " << moneyyyyyyyyyyy->salario << " Agora será de " << moneyyyyyyyyyyy->reajustado << endl;
}

typedef struct assembly {
    int n1;
    int n2;
    int select;
};

void essevaiserEmAssembly(assembly *asma) {
    cout << "Digite um valor de 0 a 4: " << endl;
    cin >> asma->select;
    cout << "Digite um primeiro número: " << endl;
    cin >> asma->n1;
    cout << "Digite um segundo número: " << endl;
    cin >> asma->n2;
    int num = 0, n1 = asma->n1, n2 = asma->n2;
    switch (asma->select)
    {

    case 0:
        __asm {
            mov eax, n1; move n1 ao registrador eax
            mov ecx, n2; move n2 ao registrador ecx
            add eax, ecx; soma os dois números
            mov num, eax; move o resultado de eax para a variável num
        };
        break;
    
    case 1:
        __asm {
            mov eax, n1; move n1 ao registrador eax
            mov ecx, n2; move n2 ao registrador ecx
            sub eax, ecx; subtrai os dois números
            mov num, eax; move o resultado de eax para a variável num
        };
        break;

    case 2:
        __asm {
            mov eax, n1; move n1 ao registrador eax
            mov ecx, n2; move n2 ao registrador ecx
            imul eax, ecx; multiplica os dois números
            mov num, eax; move o resultado de eax para a variável num
        };
        break;

    case 3:
        __asm {
            mov eax, n1; move n1 ao registrador eax
            mov ecx, n2; move n2 ao registrador ecx
            sub eax, ecx; subtrai os dois números
            mov num, eax; move o resultado de eax para a variável num
        };
        break;

    case 4:
        __asm {
            mov eax, n1; move n1 ao registrador eax
            mov ecx, n2; move n2 ao registrador ecx
            add eax, ecx; soma os dois números
            mov num, eax; move o resultado de eax para a variável num
        };
        num /= 2; //poxa eu não vou ficar usando imul para fazer a média né professor, assim simplifica a vida e o resultado kk
        break;

    default:
        break;
    }
    cout << "O resultado é " << num;
}


int main()
{
    setlocale(LC_ALL, ".utf8");
    std::cout << "Hello World!\n";
    pessoa pessoa;
    idadeDePessoaExercicio1(&pessoa);
    numero_malucos maluco;
    numerosDeMaluco(&maluco);
    parimpar parparimpar;
    numeroParImpar(&parparimpar);
    funcionario moneyyyyyyyyyyy;
    GiveMEmyMoney(&moneyyyyyyyyyyy);
    assembly asma;
    essevaiserEmAssembly(&asma);
}