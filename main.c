//
//  main.c
//  Switchcase
//
//  Created by Kanix on 27/09/21.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    int response,a,b,result;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\n\t1.Addition");
    printf("\n\t2.Subtraction");
    printf("\n\t3.Multiplication");
    printf("\n\t4.Division");
    printf("\n\t5.Exit");
    printf("\nWhich operation do you want to perform ?:");
    scanf("%d",&response);
    switch (response) {
        case 1:
            result = a+b;
            printf("The sum of two numbers is:%d\n\n",result);
            break;
            
        case 2:
            result = a-b;
            printf("The difference of two numbers is :%d\n\n",result);
            break;
            
        case 3:
            result = a*b;
            printf("The product of two numbers is :%d\n\n",result);
            break;
            
        case 4:
            result = a/b;
            printf("The quotient is:%d\n\n",result);
            
        case 5:
            exit(0);
            
            
        default:
            printf("Please select any of the above given number\n\n");
            
    }
}
