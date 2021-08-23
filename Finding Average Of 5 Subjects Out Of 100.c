//
//  main.c
//  FindingAverageOf5Subjects
//
//  Created by Nikhil Ignatius V on 22/08/21.
//

#include <stdio.h>

int main() {
    int eng,seclan,mat,sci,soc;
    float avg;
    printf("Enter your marks out of 100");
    
    printf("\n\nEnter your english mark:");
    scanf("%d",&eng);
    
    printf("Enter your II Language mark:");
    scanf("%d",&seclan);
    
    printf("Enter your Matematics mark:");
    scanf("%d",&mat);
    
    printf("Enter your Science mark:");
    scanf("%d",&sci);
    
    printf("Enter your Social Science mark:");
    scanf("%d",&soc);
    
    avg = eng+seclan+mat+sci+soc/5;
    
    printf("\n\nYou're average mark of 5 sujects is:%f\n\n",avg);
}
