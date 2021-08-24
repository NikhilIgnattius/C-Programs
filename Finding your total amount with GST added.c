//
//  main.c
//  Bill Amount
//
//  Created by Nikhil Ignatius V on 24/08/21.
//

#include <stdio.h>


int main() {
    int a,b,c,d,e,toam;
    float gsttoam,gstptoam,gst;
    
       printf("Total amount with GST");
    
    printf("\n\nPrice for Item 1:");
    scanf("%d",&a);
    
    printf("Price for Item 2:");
    scanf("%d",&b);
    
    printf("Price for Item 3:");
    scanf("%d",&c);
    
    printf("Price for Item 4:");
    scanf("%d",&d);
    
    printf("Price for Item 5:");
    scanf("%d",&e);
    
    toam = a+b+c+d+e;
    
    printf("\n\nYour total amount is:%d",toam);
   
    printf("\n\nEnter the GST value:");
    scanf("%f",&gst);
    
    
    gsttoam = (toam * gst)/100;
    
    gstptoam = toam + gsttoam;
    printf("\n\nYour total amount with GST:%f\n\n",gstptoam);
   
    getchar();
    
    
    
}
