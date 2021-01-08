#include <stdio.h>

int main() {
	int h = 3;
    for (int i= 1;i <= h;i++){
    
	for (int n=1; n <= h - i;n++)
	 printf(" ");
	for (int k = 1; k <= 2*i-1;k++)
	 printf("*");
	 
	 printf("\n");
	
	}
	
	return 0;
}	
