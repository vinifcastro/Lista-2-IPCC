#include <stdio.h>
#include <math.h>
#include <string.h>

char ordem[4][20] = {"(primeira ordem)", "(segunda ordem)", "(terceira ordem)", "(quarta ordem)"};
char plural[8][30] = {"unidade de milhar", "unidades de milhar", "centena", "centenas", "dezena", "dezenas", "unidade", "unidades"};
int x;
int k, m, c, d, u, a, b, g, j;

int main(){
    scanf("%d", &x);
    if((x>0) && (x<=9999)){
        ordemnumero();
        descricao();
    }
    else {
        printf("Numero invalido!\n");
    }
    return 0;
}

void pluralorsing(){
    if (m == 1){
        a = 0;
    }
    else{
        a = 1;
    }
    if (c == 1){
        b = 2;
    }
    else{
        b = 3;
    }
    if (d == 1){
        g = 4;
    }
    else{
        g = 5;
    }
    if (u == 1){
        j = 6;
    }
    else{
        j = 7;
    }
}

void ordemnumero(){
    if ((x>=1000)&&(x<=9999)) {
        k=4;
    }
    else if ((x>=100)&&(x<=999)){
        k=3;
    }
    else if ((x>=10)&&(x<=99)){
        k=2;
    }
    else{
        k=1;
    }
}

descricao(){
    m = (x/1000) %10;
    c = (x/100) %10;
    d = (x/10) %10;
    u = x %10;
    x = (m*1000) + (c*100) + (d*10) + u;
    pluralorsing();
    switch(k){
        case(4):
            printf("%s %d = ", ordem[(k-1)], x);
            if (m == 0){
                printf("");
            }
            else{
                printf("%d %s ", m, plural[a]);
            }
            if (c == 0){
                printf("");
            }
            else{
                printf("+ %d %s ", c, plural[b]);
            }
            if (d == 0){
                printf("");
            }
            else{
                printf("+ %d %s ", d, plural[g]);
            }
            if (u == 0){
                printf("");
            }
            else{
                printf("+ %d %s", u, plural[j]);
            }
            printf(" = ");
            printf("%d ", m*1000);
            if (c > 0){
                printf("+ %d ", c*100);
            }
            else{
                printf("");
            }
            if (d > 0){
                printf("+ %d ", d*10);
            }
            else{
                printf("");
            }
            if (u > 0){
                printf("+ %d ", u);
            }
            else{
                printf("");
            }
            break;
        case(3):
            printf("%s %d = ", ordem[(k-1)], x);
            if (c == 0){
                printf("");
            }
            else{
                printf("%d %s ", c, plural[b]);
            }
            if (d == 0){
                printf("");
            }
            else{
                printf("+ %d %s ", d, plural[g]);
            }
            if (u == 0){
                printf("");
            }
            else{
                printf("+ %d %s", u, plural[j]);
            }
            printf(" = ");
            if (c > 0){
                printf("%d ", c*100);
            }
            else{
                printf("");
            }
            if (d > 0){
                printf("+ %d ", d*10);
            }
            else{
                printf("");
            }
            if (u > 0){
                printf("+ %d ", u);
            }
            else{
                printf("");
            }
            break;
        case (2):
            printf("%s %d = ", ordem[(k-1)], x);
            if (d == 0){
                printf("");
            }
            else{
                printf("%d %s ", d, plural[g]);
            }
            if (u == 0){
                printf("");
            }
            else{
                printf("+ %d %s", u, plural[j]);
            }
            printf(" = ");
            if (d > 0){
                printf("%d ", d*10);
            }
            else{
                printf("");
            }
            if (u > 0){
                printf("+ %d ", u);
            }
            else{
                printf("");
            }
            break;
        default:
            printf("%s %d = ", ordem[(k-1)], x);
            if (u == 0){
                printf("");
            }
            else{
                printf("%d %s", u, plural[j]);
            }
            printf(" = ");
            if (u > 0){
                printf("%d ", u);
            }
            break;    
    }
}