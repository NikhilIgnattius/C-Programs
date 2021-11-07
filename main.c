//
//  main.c
//  Profit or loss
//
//  Created by Nikhil Ignatius V on 07/11/21.
//

#include <stdio.h>

int main() {
    int sp,cp;
    
    printf("Enter your cost price:");
    scanf("%d",&cp);
    printf("Enter your selling price:");
    scanf("%d",&sp);
    
    if (cp > sp) {
        printf("\nIt's a loss\n\n");
    }
    
    else if (cp < sp){
        printf("\nIt's a profit\n\n");
    }
    else {
        printf("\nIt's Neither loss nor profit\n\n");
    }
}
