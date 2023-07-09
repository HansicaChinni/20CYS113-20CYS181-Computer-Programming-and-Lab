// Matrix Multiplication - fixed
#include<stdio.h>
int main(){
    int matrix1[3][3]={{1,0,-1},{0,-1,1},{-1,0,1}},matrix2[3][3]={{1,2,3},{2,3,1},{3,1,2}};
     int matrix3[3][3] = {{0,0,0}, {0,0,0}, {0,0,0}};
     int i,j,k;
    
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             for(k=0;k<3;k++){
                 matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
             }
         }
     }
     for(i=0;i<3;i++){
          for(j=0;j<3;j++){
             printf("%d \t",matrix3[i][j]);
         }
         printf("\n");
        
     }
 
}
