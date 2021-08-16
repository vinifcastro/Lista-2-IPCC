#include <stdio.h>

int main(){
    int x[3], m, mm, mmm;
    char j, k, l;
    scanf("%d %d %d%*c", &x[0], &x[1], &x[2]);
    scanf("%c %c %c", &j, &k, &l);
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
    if ((j == 'A') && (k == 'B') && (l == 'C')){
        printf("%d %d %d\n", m, mm, mmm);
    }
    else if ((j == 'A') && (k == 'C') && (l == 'B')){
        printf("%d %d %d\n", m, mmm, mm);
    }
    else if ((j == 'B') && (k == 'A') && (l == 'C')){
        printf("%d %d %d\n", mm, m, mmm);
    }
    else if ((j == 'B') && (k == 'C') && (l == 'A')){
        printf("%d %d %d\n", mm, mmm, m);
    }
    else if ((j == 'C') && (k == 'A') && (l == 'B')){
        printf("%d %d %d\n", mmm, m, mm);
    }
    else if ((j == 'C') && (k == 'B') && (l == 'A')){
        printf("%d %d %d\n", mmm, mm, m);
    }
    return 0;
}