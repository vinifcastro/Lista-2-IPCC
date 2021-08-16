#include <stdio.h>

int main(){
    float renda, ummeiosm, rendapc;
    int qtdp, em, etnia, cotarenda;

    scanf("%f %d %d %d", &renda, &qtdp, &em, &etnia);
    ummeiosm = 937*1.5;
    rendapc = renda / qtdp;
    if (rendapc <= ummeiosm){
        cotarenda = 1;
    }
    else{
        cotarenda = 0;
    }
    if ((cotarenda == 1) && (em == 2) && (etnia == 4)){
        printf ("ALUNO COTISTA (L1)\n");
    }
    else if ((cotarenda == 1) && (em == 2) && (etnia != 4)){
        printf ("ALUNO COTISTA (L2)\n");
    }
    else if ((cotarenda == 0) && (em == 2) && (etnia == 4)){
        printf ("ALUNO COTISTA (L3)\n");
    }
    else if ((cotarenda == 0) && (em == 2) && (etnia != 4)){
        printf ("ALUNO COTISTA (L4)\n");
    }
    else{
        printf ("ALUNO NAO COTISTA\n");
    }
    return 0;
}