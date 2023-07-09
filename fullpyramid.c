#include <stdio.h>
int main(){
	int i,j,r,k;
	scanf("%d",&r);
	if (0<r&&r<25){
	for(i=1;i<=r;i++){
		for(j=1;j<=2*r-1;j++){
			if(j>=r-(i-1)&&j<=r+(i-1)){
				printf("* ");}
			else{printf("  ");}
					}
		printf("\n");
			}	


		}
		else{printf("Invalid Input\n");}
}	
