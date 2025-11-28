#include<stdio.h>
int fac_n(int n){
    int f=1;
    while(n>1){
        f=f*n;
        n--;
    }
        return f;
    }
int main(){
    printf("Enter the value of n( for factorial)    : ");
    int n;
    scanf("%d",&n);
    
        int x=fac_n(n);
    printf("Factorial is : %d",x);
   
    return 0;
}
