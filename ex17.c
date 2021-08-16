#include <stdio.h>

int main(){
    int x, dm, um, c, d, u, test;
    scanf("%d",  &x);
    if ((x>=0) && (x<=99999)){
        dm = x/10000;
        um = (x%10000)/1000;
        c  = ((x%10000)%1000)/100;
        d  = (((x%10000)%1000)%100)/10;
        u  = (((x%10000)%1000)%100)%10;
        if (dm != 0){
            test = (u*10000) + (d*1000) + (c*100) + (um*10) + dm;
        }
        else if ((dm == 0) && (um != 0) && (c != 0) && (d != 0) && (u != 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um != 0) && (c == 0) && (d != 0) && (u != 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um != 0) && (c != 0) && (d == 0) && (u != 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um != 0) && (c != 0) && (d != 0) && (u == 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um != 0) && (c == 0) && (d == 0) && (u != 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um != 0) && (c == 0) && (d != 0) && (u == 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um != 0) && (c == 0) && (d == 0) && (u == 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um != 0) && (c != 0) && (d == 0) && (u == 00)){
            test = (u*1000) + (d*100) + (c*10) + (um);
        }
        else if ((dm == 0) && (um == 0) && (c != 0) && (d == 0) && (u != 00)){
            test = (u*100) + (d*10) + (c);
        }
        else if ((dm == 0) && (um == 0) && (c != 0) && (d != 0) && (u == 00)){
            test = (u*100) + (d*10) + (c);
        }
        else if ((dm == 0) && (um == 0) && (c != 0) && (d == 0) && (u == 00)){
            test = (u*100) + (d*10) + (c);
        }
        else if ((dm == 0) && (um == 0) && (c != 0) && (d != 0) && (u != 00)){
            test = (u*100) + (d*10) + (c);
        }
        else if ((dm == 0) && (um == 0) && (c == 0) && (d != 0) && (u != 00)){
            test = (u*10) + (d);
        }
        else if ((dm == 0) && (um == 0) && (c == 0) && (d != 0) && (u == 00)){
            test = (u*10) + (d);
        }
        else if ((dm == 0) && (um == 0) && (c == 0) && (d == 0) && (u != 00)){
            test = (u);
        }
        else{
            test = 0;
        }
        if (x == test){
            printf("PALINDROMO\n");
        }
        else{
            printf("NAO PALINDROMO\n");
        }
    }
    else{
        printf("NUMERO INVALIDO\n");
    }
    return 0;
}