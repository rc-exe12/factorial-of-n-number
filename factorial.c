#include<stdio.h>
int fac_n(int n);
int main(){
    printf("Enter the value of n( for factorial)    : ");
    int n;
    scanf("%d",&n);
      int x=fac_n(n);
    printf("Factorial is : %d",x);
   
    return 0;
}
int fac_n(int n){
    if(n==1){
     return 1;
    }
else
 {
    int f=1;
    f=n*fac_n(n-1);
    return f;
}
}

