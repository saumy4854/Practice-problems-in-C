#include<stdio.h>
#include<string.h>
struct student {
    int age ;
    int roll;
    char name[50];
};
int main() {
    struct student elc[100];
    elc[0].age = 19;
    elc[0].roll = 32;
    strcpy(elc[0].name,"Saumy");

    printf("The name is %s\n",elc[0].name);
    printf("Roll no is %d\n",elc[0].roll);
    printf("Age is %d\n",elc[0].age);
    return 0;
}