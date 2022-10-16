#include<stdio.h>
int main () {
    int v1 = 11;
    int v2 = 20 ;
    int temp ,*p,*q;
    
    p = &v1 ;
    q = &v2 ;
    temp = *p ;
    *p = *q ;
    *q = temp ;

    printf("%d %d\n",v1,v2);
    return 0; 
}
