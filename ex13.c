#include <stdio.h>

int n[4], soma, maior, k;

int main(){
    scanf("%d%*c",&n[0]);
    scanf("%d%*c",&n[1]);
    scanf("%d%*c",&n[2]);
    scanf("%d",&n[3]);
    maior = n[0];
    for (k=1; k<4; k++){
        if(n[k] > maior){
            maior = n[k];
        }
    }
    soma = n[0] + n[1] + n[2] + n[3] - maior;
    printf("%d\n", soma);
    return 0;
}