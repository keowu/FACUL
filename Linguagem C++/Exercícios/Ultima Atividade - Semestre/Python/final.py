import datetime
import math

class atividade(object):
    
    @staticmethod
    def exercicio1():
        now = datetime.datetime.now()
        a = int(input("Digite seu ano de nascimento: "))
        idade = now.year - a
        anos = idade * 365
        meses = anos * 12
        semanas = meses / 7
        dia = semanas * 30
        print("Sua idade é {}, em anos {}, em meses {}, em semanas {}, em dias {} do grego strategy".format(idade, anos, meses, semanas, dia))
        
    @staticmethod
    def exercicio2():
        n1 = int(input("Digite um número: "))
        n2 = int(input("Digite um segundo número: "))
        n1 += n2
        n1 = math.sqrt(n1)
        n1 = n1 - (n1 * 0.2)
        print("O Resultado é {}".format(n1))
        
    @staticmethod
    def exercicio3():
        n = int(input("Digite um número: "))
        if n%2 == 0:
            print("PAR")
        else:
            print("IMPAR")

    @staticmethod
    def exercicio4():
        salario = float(input("Digite seu salário: "))
        if salario < 10000:
            salario += (salario * 0.55)
        elif salario >= 10000 and salario <= 25000:
            salario += (salario * 0.2)
        else:
            salario += (salario * 0.25)
        print("Seu novo salário reajustado será de {}".format(salario))

    @staticmethod
    def exercicio5():
        val = int(input("Digite um valor de 0 a 4: "))
        n1 = int(input("Digite um número: "))
        n2 = int(input("Digite um segundo número: "))
        #temos o case no python só por lambda vou usar if memo
        if val == 0:
            n1 += n2
        elif val == 1:
            n1 -= n2
        elif val == 2:
            n1 *= n2
        elif val == 3:
            n1 /= n2
        elif val == 4:
            n1 += n2
            n1 /= 2
        else:
            print("Inválido !")
            return;
        print("O Resultado é {}".format(n1))

#atividade.exercicio1()
#atividade.exercicio2()
#atividade.exercicio3()
#atividade.exercicio4()
#atividade.exercicio5()