#include <stdio.h>

int main(){
    float salario, reajustado;
    scanf("%f", &salario);
    if (salario <= 300.0){
        reajustado = salario*1.5;
    }
    else if (salario > 300.0){
        reajustado = salario*1.3;
    }
    printf("SALARIO COM REAJUSTE = %.2f", reajustado);
    return 0;
}