#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, area, per, aux[3];
    int k;

    scanf("%f %f %f", &a, &b, &c);
    aux[0] = b-c;
    aux[1] = a-c;
    aux[2] = a-b;
    for(k=0; k<3; k++){
        if (aux[k]<0){
            aux[k] = fabs(aux[k]);
        }
    }
    if(((aux[0] < b) && (b < (b+c))) && ((aux[1] < b) && (b < (a+c))) && ((aux[2] < c) && (c < (a+b)))){
        per = a + b + c;
        printf("Perimetro = %.1f\n", per);
    }
    else{
        area = ((a+b)*c)/2;
        printf("Area = %.1f\n", area);
    }
    return 0;
}