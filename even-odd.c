#include <stdio.h>
#include <windows.h>

int main(){

    int num ;

    printf("Enter a number : ");
    scanf("%d",&num);

    if((num & 1)== 0){ 
        printf("\nThe number is odd  = 0");
        Sleep(250);
        printf("\nThe number is even = 1");        
    }
    else{
        printf("\nThe number is odd  = 1");
        Sleep(250);
        printf("\nThe number is even = 0");
    }





    return 0 ;
}