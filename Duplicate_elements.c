#include <stdio.h>    
     
int main ()   {

// taking length of array as variable
int i , arr[1000] ,l;
printf("Enter the lenght of the array: ");
scanf("%d" , &l) ;
printf("Enter elements: "); 
for(i=0; i<l; i++)  {
    scanf("%d",&arr[i]);
    }
printf("Duplicate elements in given array: \n");    
    //Searches for duplicate element    
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}  
