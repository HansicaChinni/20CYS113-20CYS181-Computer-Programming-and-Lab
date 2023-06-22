#include<stdio.h>
int main(){
	int i,j,k,rows;
	int fac(int n){

		int fact=1;
	for(int i=1;i<=n;i++){fact=fact*i;}
	return fact;}
	
	int com(int n, int r){
	return (fac(n)/(fac(n-r)*fac(r)));
	
	}
	printf("Enter number of rows");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++){
	for(j=1;j<=rows-i;j++){
printf("  ");}for(k=0;k<=i;k++){
	
	printf("  %d  ",com(i,k));
}printf("\n");
	}


}
