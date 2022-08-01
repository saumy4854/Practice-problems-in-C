#include<stdio.h>
#include<string.h>
struct students {
    char name[50];
    int age;
    float CGPA ;
    char email[70];
};
int main() {
    struct students std1 ;
        strcpy(std1.name,"Saumy");
        std1.age = 19;
        std1.CGPA = 9.4;
        strcpy(std1.email,"saumy4854@gmail.com");

        printf("Name = %s\n",std1.name);
        printf("Age = %d\n",std1.age);
        printf("CGPA = %0.2f\n",std1.CGPA);
        printf("Email = %s\n",std1.email);
        return 0;
    
}