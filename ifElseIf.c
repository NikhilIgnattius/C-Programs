//
//  main.c
//  ifElseIf
//
//  Created by Nikhil Ignatius V on 19/08/21.
//

#include <stdio.h>

int main() {
    int percentage;
    printf("Enter the percentage:");
    scanf("%d",&percentage);
    
    if (percentage >= 85) {
        printf("Congrats,You have got distinction\n\n");
        
    }
    
    else if (percentage >= 60){
        printf("Congrats,You have got First class\n\n");
        
    }
    
    else if (percentage >= 50){
        printf("Congrats,You have got Second class\n\n");
        
    }
    
    else if (percentage >= 35){
        printf("Congrats,You are Pass\n\n");
        
    }
    
    else{
        printf("Sorry,you have failed\n\n");
    }
    
}
