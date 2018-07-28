/**************************************************************
    Problem: 1291
    User: jhyunlee
    Language: C++
    Result: Success
    Time:2 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
#include<malloc.h>
 
int main() {
 
    int S, E;
    int K = 0;
    int R = 0;
    //freopen("data.txt", "r", stdin);
     
    while (-1 != scanf("%d %d", &S, &E)) {
        if ((S < 2 || S>9) || (E < 2 || E>9)) {
            printf("INPUT ERROR!\n");
        }
        else {
            if (S > E) K = -1; else  K = 1;
            if (S == E) {
                for (int i = 1; i <= 9; i++) {
                    printf("%d * %d = %2d\n", S, i, S*i);
                }
            }
            else {
                for (int i = 1; i <= 9; i++) {
                    for (int j = S; (S < E) ? j <= E : j >= E; j += K) {
                        printf("%d * %d = %2d   ", j, i, j*i);
                    }
                    printf("\n");
                }
            }
        }       
    }
}
