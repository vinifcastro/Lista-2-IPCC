#include <stdio.h>

int main(){
    int x;
    float preco;
    scanf("%d", &x);

    if(x<3){
        preco = x*5;
    }
    else{
        preco = (10*((int)(x/3))) + ((x%3)*5);
    }
    printf("O VALOR A PAGAR E = %.2f\n", preco);
    return 0;
}