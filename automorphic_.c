#include <stdio.h>
#include<math.h>
int main() {
    int n ;
    printf("Enter the number: \n", n);
    scanf("%d",&n);
    if ((n * n) % 10 == n % 10) {
        printf("n is automorphic");
    }
    else {
        printf("n is not automorphic");
    }
return 0;
}