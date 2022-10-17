// write a program to write all odd numbers from 1 to n
#include<stdio.h>
int main () {
    FILE *fptr ;
    fptr = fopen("oddnum.txt","w");
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++) {
        if (i%2 ==1){
            fprintf(fptr,"%d\n",i);
        }
    }
    fclose(fptr) ;
    return 0;

}
