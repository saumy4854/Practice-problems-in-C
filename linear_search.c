#include<stdio.h>
int main () {
    int arr[] = {1,5,9,8,4,10,32};
    int n ;
    printf("Enter the number to be found:\n");
    scanf("%d",&n);
    for(int i=0;i<sizeof(arr);i++){
        if(n == arr[i]){
            printf("The number is found and is at the %dth position \n;",i);
            return 0;
        }
    }
printf("The number is not in the array");
return 0 ;
}