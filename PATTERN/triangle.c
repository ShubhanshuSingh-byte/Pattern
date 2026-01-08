#include<stdio.h>

int main(){
    rat();
    return 0;
}

int rat(){
    for(int i=1; i<=10;i++){
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

