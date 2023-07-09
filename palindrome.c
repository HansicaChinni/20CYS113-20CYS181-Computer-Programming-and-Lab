#include <stdio.h>
int main() {
    int n,s=0,new,r;
    scanf("%d",&n);
    if (n<0)
    {new=-1*n;
       n=-1*n;
    }
    else {new=n;}
    while(new>0)
    {r=new%10;
    s=s*10+r;
    new=new/10;
    }
    if(s==n)
    {printf("Is a palindrome.\n");}
    else {printf("Is not a palindrome.\n");}
    return 0;
}

