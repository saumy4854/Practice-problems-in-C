// Taxi fare ques
#include <stdio.h>
int main () {
    int n,a,b,c,d;
    printf("The distance is (in km): \n");
    scanf("%d",&n);
    if (n <= 10) {
        a = n * 30 ;
        printf("Amount is: %d " ,a);
    }
    else if (n <=30) {
         b = 300 + (n - 10) * 20 ;
        printf("Amount is: %d ", b);
    }
    else if (n <=70) {
        c = 700 + (n - 30) * 15  ;
        printf("Amount is: %d ", c);
    }
    else if (n > 70) {
        d = 1300 + (n- 70) * 12 ;
        printf("Amount is: %d ",c);
    }
    return 0;
}
