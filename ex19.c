#include <stdio.h>

int main(){
    float n[4], temp;
    int k, j;

    scanf("%f%*c",&n[0]);
    scanf("%f%*c",&n[1]);
    scanf("%f%*c",&n[2]);
    scanf("%f",&n[3]);
    for(j = 0; j < 4; j++){
        for(k = 0; k < 4; k++){
            if((n[k]>n[k+1]) && k!=3){
                temp = n[k+1];
                n[k+1] = n[k];
                n[k] = temp;
            }
            else if (k == 3 && (n[k]<n[0])){
                temp = n[0];
                n[0] = n[k];
                n[k] = temp;
            }
        }
    }
    printf ("%.2f, %.2f, %.2f, %.2f", n[0], n[1], n[2], n[3]);
    return 0;
}