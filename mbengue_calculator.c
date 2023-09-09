#include <stdio.h>
#include <stdlib.h>

//simple calculator made by MBENGUE Guy
int main() {
    //celaration
    int choice,a,b,s; 
    //choising number 

    printf("Plesae choice number a\n a= ");
    scanf("%d", &a);
    printf("Plesae choice number b\n b= ");
    scanf("%d", &b);
    
    //MENU

    printf("CALCULATOR\n 1-addition\n 2-susbtraction\n 3-multiplication\n 4-Division\n");
    //choice option 
    printf("make your choice using number (eg : 1): ");
    scanf("%d", &choice);

    //addition
    if (choice==1) {
        s=a+b;
        printf(" %d + %d = %d",a, b,s);
    //substraction
    }else if (choice==2) {
        s=a-b;
        printf(" %d - %d = %d",a, b,s);
    //multiplication
    }else if (choice==3){
        s=a*b;
        printf(" %d x %d = %d",a, b,s);
    //division
        
    }else if (choice==4) {
        s=a/b;
        printf(" %d / %d = %d",a, b,s);
        //error 
    }else {
        printf("an error occurs, you may not choose a number or tried to divide by 0");
    }


    return 1;
}
