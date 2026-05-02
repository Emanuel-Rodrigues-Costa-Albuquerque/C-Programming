#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct{
    char NomeFunc[31];
    double Salario;
    int HorasTrabalhadas;
} funcionarios ;

#define LER_NOME(buf) fgets(buf, sizeof(buf), stdin);
#define LER_SALARIO(buf) scanf("%lf", &buf);
#define LER_HORASTRABALHADAS(buf) scanf("%d", &buf);

double CalcularBonus(funcionarios funcionario1);

int main(){
    funcionarios funcionario1;


    printf("Digite o Nome do Funcionario: \n");
    LER_NOME(funcionario1.NomeFunc);

    printf("Digite o Salario do Funcionario: \n");
    LER_SALARIO(funcionario1.Salario);

    printf("Digite as Horas Trabalhadas do Funcionario: \n");
    LER_HORASTRABALHADAS(funcionario1.HorasTrabalhadas);

    printf("Dados do Funcionario:");
    
    printf(" NOME : %s\n ", funcionario1.NomeFunc);
    printf("Salario Sem Bonus: %.2lf\n", funcionario1.Salario);
    printf("Horas Trabalhadas: %d\n", funcionario1.HorasTrabalhadas);

    double bonus = CalcularBonus(funcionario1);

    printf("Calculo do Bonus: %.lf\n", bonus);

    return 0;
}

double CalcularBonus(funcionarios funcionario1){
    double result = 0;
    if(funcionario1.HorasTrabalhadas > 40){
        result = funcionario1.Salario * 0.15;
    }
    else if(funcionario1.HorasTrabalhadas <= 40){
       result = funcionario1.Salario * 0.05;
    }
    return result;
}