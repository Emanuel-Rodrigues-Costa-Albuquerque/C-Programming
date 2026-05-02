#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Nomecarro[20];
    double PesoCarro;
    int Velocidade;
} carros ;

#define LER_STR(buf) fgets(buf, sizeof(buf), stdin);

double calcEC(carros car1);

int main(){
     carros car1;
    printf("Digite um nome para o Carro: \n ");
    LER_STR(car1.Nomecarro);

    printf("Digite o Peso do Carro: \n");
    scanf("%lf", &car1.PesoCarro);

    printf("Digite a Velocidade do Carro: \n");
    scanf("%d", &car1.Velocidade);

    printf("Dados do Carro: \n");
        printf("Nome: %s\n ", car1.Nomecarro);
        printf("Peso: %.2f\n ", car1.PesoCarro);
        printf("Velocidade: %d\n ", car1.Velocidade);
    
    printf("Energia Cinetica do carro: \n");
    double resultado = calcEC(car1);
    printf("Energia Cinetica: %.2f\n", resultado);

    return 0;
}

double calcEC(carros car1){
    double Energia = car1.PesoCarro * (car1.Velocidade * car1.Velocidade) / 2;
    return Energia;
}