int main(){
    float n[3], temp;
    int k, j, i;

    scanf("%d%*c",&i);
    scanf("%f%*c",&n[0]);
    scanf("%f%*c",&n[1]);
    scanf("%f",&n[2]);
    for(j = 0; j < 3; j++){
        for(k = 0; k < 3; k++){
            if((n[k]>n[k+1]) && k!=2){
                temp = n[k+1];
                n[k+1] = n[k];
                n[k] = temp;
            }
            else if (k == 2 && (n[k]<n[0])){
                temp = n[0];
                n[0] = n[k];
                n[k] = temp;
            }
        }
    }
    if(i == 1){
        printf("%.2f %.2f %.2f", n[0], n[1], n[2]);
    }
    else if (i == 2){
        printf("%.2f %.2f %.2f", n[2], n[1], n[0]);
    }
    else if (i == 3){
        printf("%.2f %.2f %.2f", n[1], n[2], n[0]);
    }
    return 0;
}