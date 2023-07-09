#include<stdio.h>
int isPrime(int n){
        int i,a,b;
        int f=0;

        for(i=1;i<n;i++){
        if(n%i==0){
        f=f+1;
        }
                }
        if(f<=1){
        return 1;
        }
        else { return 0;}
        }

void generatePrimes(int n1,int n2){
        int k,i;
        printf("Prime numbers between %d and %d are: \n",n1,n2);
        for(i=n1;i<=n2;i++){
        if(isPrime(i)==1){printf("%d ",i);}}

}
int main(){
int n1,n2,n;
scanf("%d%d",&n1,&n2);
generatePrimes(n1,n2);

}


