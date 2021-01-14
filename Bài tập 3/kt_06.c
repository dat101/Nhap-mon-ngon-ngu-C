a)

#include <stdio.h>

int main() {
	int h = 4;
    for (int i= 1;i <= h;i++){
    
	for (int n=1; n <= h - i;n++)
	 printf(" ");
	for (int k = 1; k <= 2*i-1;k++)
	 printf("*");
	 
	 printf("\n");
	
	}
}	
---------------------------
b)

#include<stdio.h>

int main() {
    int h = 4;
	
    for (int i=h;i>0;i--) {
	
    for (int j=1;j<i;j++)
	printf(" ");
    for (int k=1;k<=(2*(h-i)+1);k++)
	if ((k==1)||(k==(2*(h-i)+1))||(i==1))
 printf("*");
	else
 printf(" ");
        printf("\n");
	}
}
