#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".utf8");

    float numa = 0, numb = 0;

    cout << "Digite um primeiro número: " << endl;
    cin >> numa;
    cout << "Digite um segundo número: " << endl;
    cin >> numb;
        
    char op;
    cout << "Digite a operação básica que seja fazer: " << endl;
    cin >> op;

    float resultado = 0;
    switch (op)
    {

        case '+':
            resultado = (float)(numa + numb);
            break;
        case '-':
            resultado = (float)(numa - numb);
            break;
        case '*':
            resultado = (float)(numa * numb);
            break;
        case '/':
            resultado = ((numa==(float)0)||(numb==(float)0))?0:(float)(numa/numb);
            break;
    default:
        resultado = 0;
        break;
    }

    cout << "O resultado é " << resultado << endl;
}
