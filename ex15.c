#include <stdio.h>

int main(){
    int cc, dr, rt, t1, t2, t3, grau;
    scanf("%d%*c",&cc);
    scanf("%d%*c",&dr);
    scanf("%d",&rt);

    if(cc < 7){
        t1 = 1;
    }
    else{
        t1 = 0;
    }
    if(dr > 50){
        t2 = 1;
    }
    else{
        t2 = 0;
    }
    if (rt > 80000){
        t3 = 1;
    }
    else{
        t3 = 0;
    }
    if((t1 == 1) && (t2 == 1) && (t3 == 1)){
        grau = 10;
    }
    else if((t1 == 1) && (t2 == 1) && (t3 == 0)){
        grau = 9;
    }
    else if((t1 == 1) && (t2 == 0) && (t3 == 0)){
        grau = 8;
    }
    else{
        grau = 7;
    }
    printf("ACO DE GRAU = %d", grau);
    return 0;
}