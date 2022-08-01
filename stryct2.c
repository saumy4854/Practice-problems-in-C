#include<stdio.h>
struct students {
    int age ;
    int roll;
    char name[50];
};
int main () {
    struct students s1 = {19,32,"saumy"};
    struct students s2 = {19 ,48,"prashant"};
    struct students s3 = {20,44,"yash"};

    printf("Roll is %d",s1.roll);
}