#include<stdio.h>
int main(){

int i,j,k,rows;
printf("enter rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
for(j=1;j<=rows-i;j++){
printf("  ");

}
for(k=1;k<=j;k++){
printf("1 %d",k);

}


}
return 0;
}
