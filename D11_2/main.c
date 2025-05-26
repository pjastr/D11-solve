#include <stdio.h>
#include <stdlib.h>

int maxSecDiag(int ** tab, int n){
    int temp = tab[0][n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i+j == n-1){
                if (temp < tab[i][j]){
                    temp = tab[i][j];
                }
            }
        }
    }
    return temp;
}

int maxSecDiag2(int ** tab, int n){
    int temp = tab[0][n-1];
    for(int i=1;i<n;i++){
        if (temp < tab[i][n-1-i]){
            temp = tab[i][n-1-i];
        }

    }
    return temp;
}


int main()
{
    int ** tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] = 3;  tab[0][1] = -4; tab[0][2] = 5;
    tab[1][0] = 1;  tab[1][1] = 22; tab[1][2] = -33;
    tab[2][0] = -3; tab[2][1] = 5;  tab[2][2] = -7;
    printf("%d\n",maxSecDiag(tab, 3));
    printf("%d\n",maxSecDiag2(tab, 3));
    return 0;
}
