//
//  main.c
//  DivisibleBy3
//
//  Created by Nikhil Ignatius V on 22/08/21.
//

#include <stdio.h>

int main() {
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    

    if (a%3 == 0) {
        printf("Your number %d is divisible by 3\n\n",a);
    }
    
    else{
        printf("Your number %d is not divisible by 3\n\n",a);
    }
    
    
    
    getchar();
}
