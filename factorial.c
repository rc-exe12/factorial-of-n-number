#include<stdio.h>
int main(){
    printf("Enter the value of n( for factorial)    : ");
    int n;
    scanf("%d",&n);
    int f=1;
    while(n>1){
        f=f*n;
        n--;
            }
    printf("Factorial is : %d",f);
    return 0;

}