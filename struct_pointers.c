#include<stdio.h>
#include<string.h>
struct students {
    int age;
    char name[50];
};
int main() {
    struct students s1 = {19, "saumy"};
    struct students *p ;
    p = &s1 ;
    printf("name is %s and age is %d\n",(*p).name,(*p).age);
}