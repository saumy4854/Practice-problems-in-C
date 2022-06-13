#include <stdio.h>
int main () {
    int n;
    printf("Enter the side : ");
    scanf("%d",&n) ;
    switch (n) {
        case 3 : printf("Triangle");
                    break ;
        case 4 : printf("Rectangle");
                    break ;
        case 5 : printf("Pentagon");
                    break;
        case 6 : printf("Hexagon");
                    break;
        default : printf("Enter side between 3-6 only !");
                    break;                       
    }
    return 0;
}