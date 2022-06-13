#include <stdio.h>
int main () {
    printf("              Colonial   Single-storey   Split-entery \n");
    int b1 , b2 , b3 ,s1,s2,s3;
    printf("Base price: \n",b1,b2,b3);
    scanf("          %d   %d   %d",&b1,&b2,&b3);
    printf("Price per sq ft: \n", s1 , s2 ,s3);
    scanf("           %d   %d   %d",&s1,&s2,&s3);
   int min_sq_ft = (s1 < s2) ? (s1 < s3 ? s1 : s3) : (s2 < s3 ? s2 : s3);
   printf("The least price per sq ft is %d", min_sq_ft);
   return 0; 
}