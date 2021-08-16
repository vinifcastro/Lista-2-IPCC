#include <stdio.h>

int main(){
    int mat, dep;
    float sm, sf, taxa, ibruto, iliq, result;
    scanf ("%d %f %d %f %f", &mat, &sm, &dep, &sf, &taxa);

    if(sf > 12*sm){
        ibruto = 0.2*sf;
    }
    else if (sf > 5*sm){
        ibruto = 0.08*sf;
    }
    else {
        ibruto = 0;
    }
    iliq = ibruto - (300*dep);
    result = iliq - ((taxa/100)*sf);
    if (result < 0){
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\nIMPOSTO A RECEBER\n", mat, ibruto, iliq, result);
    }
    else if (result == 0){
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\nIMPOSTO QUITADO\n", mat, ibruto, iliq, result);
    }
    else{
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\nIMPOSTO A PAGAR\n", mat, ibruto, iliq, result);
    }
    return 0;
}