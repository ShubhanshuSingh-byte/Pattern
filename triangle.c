#include<stdio.h>

int main(){
<<<<<<< HEAD
    cross_x();
    return 0;
}

//cross-x
int cross_x(){
    int n=9;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i || j==(n-i+1)){
                printf("%d", i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
=======
>>>>>>> edd8150b947a21e9be5be9ed2d62f9f7348b0bd9
    return 0;
}

//right angle triangle
int rat(){
    for(int i=1; i<=10;i++){
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//equilateral triangle
int eqt(){
    int j,n=5;
    for(int i=n; i>0;i--){
        for(j=0; j<i-1;j++){
            printf(" ");
        }
        for(int k=0;k<n-j;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//hollow equilateral triangle
int heqt(){
   int n = 5;

    for (int i = 1; i <= n; i++) {

        // leading spaces
        for (int s = 1; s <= n - i; s++)
            printf(" ");

        // stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (i == n || k == 1 || k == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}


//hollow right angle triangle
int hrat(){
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<=n;i++){
        printf("*");
    }
    return 0;
}

//inverse right angle triangle
int irat(){
    for(int i=1; i<=10;i++){
        for(int j=1; j<=10-i;j++){
            printf(" ");
        }
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
