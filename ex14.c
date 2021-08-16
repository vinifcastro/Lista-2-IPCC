#include <stdio.h>
#include <math.h>

int dia, mes, ano, x;
char meses[12][20] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

int main(){
    scanf("%d", &x);
    dia = (x/1000000);
    mes = (x/10000) % 100;
    ano = x % 10000;
    
    if(mes==4 || mes==6 || mes==9 || mes==11){
        if ((dia>0) && (dia <= 30)){
        printf ("%02d de %s de %04d\n", dia, meses[mes-1], ano);
    }
    else {
        printf("Data invalida!\n");
    }
        return 0;
    }
    else if (mes==2){
        if ((dia>0) && (dia <= 28)){
        printf ("%02d de %s de %04d\n", dia, meses[mes-1], ano);
    }
    else {
        printf("Data invalida!\n");
    }
        return 0;
    }
    else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        if ((dia>0) && (dia <= 31)){
        printf ("%02d de %s de %04d\n", dia, meses[mes-1], ano);
    }
    else {
        printf("Data invalida!\n");
    }
        return 0;
    }
    else{
        printf("Data invalida!\n");
        return 0;
    }
}