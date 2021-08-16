#include <stdio.h>

int main(){
    int x;
    char bissexto[2][20] = {"ANO BISSEXTO", "ANO NAO BISSEXTO"};

    scanf("%d", &x);

    if (((x%4)==0) && ((x%100)!=0)){
        printf("%s\n", bissexto[0]);
    }
    else if ((x%400) == 0){
        printf("%s\n", bissexto[0]);
    }
    else {
        printf("%s\n", bissexto[1]);
    }
    return 0;
}