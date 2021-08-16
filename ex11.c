#include <stdio.h>

int main(){
    float x[3], m, mm, mmm;

    scanf("%f%*c",&x[0]);
    scanf("%f%*c",&x[1]);
    scanf("%f",&x[2]);

    mm = x[0];
    if ((x[0] == x[1]) && (x[0] == x[2])){
        m = x[0]; mm = x[1]; mmm = x[2];
    }
    else if ((x[0] == x[1]) && (x[0] != x[2])){
        if (x[0] > x[2]){
            m = x[2]; mm = x[0]; mmm = x[0];
        }
        else if (x[0] < x[2]){
            m = x[0]; mm = x[0]; mmm = x[2];
        }
    }
    else if ((x[0] == x[2]) && (x[0] != x[1])){
        if (x[0] > x[1]){
            m = x[1]; mm = x[0]; mmm = x[0];
        }
        else if (x[0] < x[1]){
            m = x[0]; mm = x[0]; mmm = x[1];
        }
    }
    else if ((x[1] == x[2]) && (x[1] != x[0])){
        if (x[1] > x[0]){
            m = x[0]; mm = x[1]; mmm = x[1];
        }
        else if (x[1] < x[0]){
            m = x[1]; mm = x[1]; mmm = x[0];
        }
    }
    else if ((x[0] != x[1]) && (x[0] != x[2]) && (x[1] != x[2])){
        if ((x[0] > x[1]) && (x[0] < x[2])){
            mm = x[0];
        }
        else if ((x[0] < x[1]) && (x[0] > x[2])){
            mm = x[0];
        }
        else if ((x[1] > x[0]) && (x[1] < x[2])){
            mm = x[1];
        }
        else if ((x[1] < x[0]) && (x[1] > x[2])){
            mm = x[1];
        }
        else if ((x[2] > x[0]) && (x[2] < x[1])){
            mm = x[2];
        }
        else if ((x[2] < x[0]) && (x[2] > x[1])){
            mm = x[2];
        }
        if (x[0] > mm) mmm = x[0];
        else if (x[1] > mm) mmm = x[1];
        else if (x[2] > mm) mmm = x[2];
        if (x[0] < mm) m = x[0];
        else if (x[1] < mm) m = x[1];
        else if (x[2] < mm) m = x[2];
    }
    printf("%.2f, %.2f, %.2f\n", m, mm, mmm);
    return 0;
}