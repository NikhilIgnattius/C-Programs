//
//  main.c
//  Switch case with acoustic guitar strings
//
//  Created by Nikhil Ignatius V on 27/09/21.
//

#include <stdio.h>

int main() {
    int response;
    printf("Enter the acoustic guitar string number from bottom to top");
    printf("\n\t1.String no:1");
    printf("\n\t2.String no:2");
    printf("\n\t3.String no:3");
    printf("\n\t4.String no:4");
    printf("\n\t5.String no:5");
    printf("\n\t6.String no:6");
    printf("\nType the string number to know the name ?:");
    scanf("%d",&response);
    switch (response) {
        case 1:
            printf("\nThis is the higher E string which is string no:1\n\n");
            break;
            
        case 2:
            printf("\nThis is the B string which is string no:2\n\n");
            break;
            
        case 3:
            printf("\nThis is the G string which is string no:3\n\n");
            break;
            
        case 4:
            printf("\nThis is the D string which is string no:4\n\n");
            break;
            
        case 5:
            printf("\nThis is the A string which is string no:5\n\n");
            break;
            
        case 6:
            printf("\nThis is the lower E string which is string no:6\n\n");
            break;
            
        default:
            printf("\nPlease select any of the above given number\n\n");
            
    }
}
