#include<stdio.h>
long int fact(int n) {
if (n == 0) 
    return 1;
else 
    return n*fact(n-1);
}
int main() {
    int a ;
    printf("Enter the value of n:");
    scanf("%d",&a);
    long int res;
    res = fact(a);
    printf("Factorial of %d is- %ld",a,res);
}

