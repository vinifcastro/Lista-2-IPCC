#include <stdio.h>
#include <math.h>

int main(){

    float m2, preco;
    int conta;
    char x;

    scanf("%d %f %c", &conta, &m2, &x);

    switch(x){
        case('R'):
        preco = 5.0 + 0.05*m2;
        printf ("CONTA = %d\n", conta);
        printf ("VALOR DA CONTA = %.2f\n", preco);
        break;
        case('C'):
        if(m2<80){
            preco = 500;
            printf ("CONTA = %d\n", conta);
            printf ("VALOR DA CONTA = %.2f\n", preco);
        }
        else{
        preco = 500 + ((m2-80)*0.25);
        printf ("CONTA = %d\n", conta);
        printf ("VALOR DA CONTA = %.2f\n", preco);
        }
        break;
        default:
        if(m2<100){
            preco = 800;
            printf ("CONTA = %d\n", conta);
            printf ("VALOR DA CONTA = %.2f\n", preco);
        }
        else{
        preco = 800 + ((m2-100)*0.04);
        printf ("CONTA = %d\n", conta);
        printf ("VALOR DA CONTA = %.2f\n", preco);
        }
    }
    return 0;
}