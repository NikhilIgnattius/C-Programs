//
//  main.c
//  nestedIf
//
//  Created by Kanix on 19/08/21.
//

#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter number a:");
    scanf("%d",&a);
    
    printf("Enter number b:");
    scanf("%d",&b);
    
    printf("Enter number c:");
    scanf("%d",&c);
    
    if (a > b)
    {
        if (a > c)
        {
            printf("\na:%d is greater\n\n",a);
        }
    }
    
    else if (b > c)
    {
        
            printf("\nb:%d  is greater\n\n",b);
        
    }
    
    else
    {
        printf("\nc:%d is greater\n\n",c);
    }
    getchar();
}
