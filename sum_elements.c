#include <stdio.h>
int main () {
    int n , arr[1000] ;
   
    printf("Length of array : \n");
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++) {
        scanf("%d",&arr[i]);
    }
    int sum = 0 ;
    for (int j = 0 ; j <n ; j++) {
    sum = sum +  arr[j] ;
    }
    for (int i = 0 ; i < n ; i++) {
         
        arr[i] = sum -  arr[i];
        
    }
    for (int i = 0 ; i< n; i++){
        printf("%d ", arr[i]);
    }
        
    
    return 0;
}
