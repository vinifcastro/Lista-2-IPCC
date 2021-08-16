#include <stdio.h>
#include <math.h>

float n1, n2 ,n3, quadrado, concatenacao;

int main(){

    scanf("%f%*c",&n1);
    scanf("%f%*c",&n2);
    scanf("%f",&n3);

    if(((n1<10) && (n1>=0) && (n1==(int)n1)) && ((n2<10) && (n2>=0) && (n2==(int)n2)) && ((n3<10) && (n3>=0) && (n3==(int)n3))){
        concatenacao = (n1*100) + (n2*10) + n3;
        quadrado = pow(concatenacao, 2);
        printf("%.0f, %.0f\n", concatenacao, quadrado);
    }
    else {
        printf("DIGITO INVALIDO\n");
    }
    return 0;
}