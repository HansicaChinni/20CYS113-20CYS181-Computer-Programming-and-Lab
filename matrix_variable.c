#include<stdio.h>
int main(){
    int matrix1[10][10],matrix2[10][10],matrix3[10][10];
    int i,j,k,m,n;
   
    scanf("%d",&m);
    scanf("%d",&n);
    
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             scanf("%d",&matrix1[i][j]);             
        }
    }

    for(i=0;i<m;i++){
         for(j=0;j<n;j++){
             scanf("%d",&matrix2[i][j]);             
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matrix3[i][j]=0;
            for(k=0;k<n;k++){
                 matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             printf("%d \t",matrix3[i][j]); }
         printf("\n");
    }
    return 0;
}
