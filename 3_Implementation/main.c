#include "anm.h"

int main(){
    int option,check;
    char choice;
    while(1){
        printf("\n\nEnter \"-1\" to quit program or Enter \"1\" to Continue\n");
        scanf("%d",&check);
        if(check == -1){
            break;
        }
        printf("\nEnter \"1 a\" To Find Roots of a Non Linear Function using Newton Raphson Method \n");
        printf("Enter \"1 b\" To Find Roots of a Non Linear Function using Bisection Method \n");
        printf("Enter \"1 c\" To Find Roots of a Non Linear Function using Regula Falsi Method \n");
        printf("Enter \"2 a\" To Find the numerical integration of a function with limits using Simpson's 1/3 Method \n");
        printf("Enter \"2 b\" To Find the numerical integration of a function with limits using Trapezoidal Method \n");
        printf("Enter \"2 c\" To Find the numerical integration of a function with limits using Simpson's 3/8 Method \n");
        scanf("%d %c",&option,&choice);
        switch(option){
            case 1:
                root_function(choice);
                break;
            case 2:
                numerical_integration(choice);
                break;
            default:
                printf("Enter Valid option");   
                break;
        }
    } 
    return 0;
}