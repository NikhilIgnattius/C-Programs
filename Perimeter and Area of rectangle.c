//
//  main.c
//  Perimeter of rectangle
//
//  Created by Kanix on 05/08/21.
//

#include <stdio.h>

int main() {
    int l,b,perimeter,area;
  
    
    printf("Enter length and breadth");
    scanf("%d%d",&l,&b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("\nPrimeter = %d",perimeter);
    printf("\nArea = %d\n",area);
   

    
}
