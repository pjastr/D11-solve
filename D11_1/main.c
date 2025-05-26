#include <stdio.h>
#include <stdlib.h>

void rmEven(char *txt){
    int i=0,j=0;
    for(i=0;txt[i] !=0;i++){
        if (i%2 != 0){
            txt[j] = txt[i];
            j++;
        }
    }
    txt[j] =0;
}

int main()
{
    char txt[] = "Hello World";
    rmEven(txt);
    printf("%s\n", txt);
    return 0;
}
