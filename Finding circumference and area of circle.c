//
//  main.c
//  FindingCircumferenceOfCircle
//
//  Created by Kanix on 22/08/21.
//
#include <stdio.h>

int main() {
    int r;
    float area,circumference;
    
    
    
   
    
    printf("For finding circle's area and circumference\n\n");
    
    printf("Enter radius:");
    scanf("%d",&r);
    
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    
    printf("\nCircumference of the circle = %f",circumference);
    printf("\nArea of the circle = %f\n\n",area);
    
    
    getchar();
    
    
}

