#include<stdio.h>
int main() {
    int e , m, s ;
    printf("Enter marks obtained in english , science , maths respectively : ",e,s,m);
    scanf("%d %d %d",&e,&s,&m);
    if (e >= 80 && m >= 80 && s >= 80){
        printf("Stream is Non-Medical");
    }
    else if (e >= 80 && s >= 80 && m >= 60) {
        printf("Stream is Medical");
    }
    else if (e >= 60 && s >= 60 && m >= 60) {
        printf("Stream is Commerce");
    }
    return 0 ;
}