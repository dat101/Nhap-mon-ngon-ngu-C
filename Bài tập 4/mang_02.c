#include<stdio.h>
 int main() {
 	int n;
 	
 	printf("Nhap n = ");
 	scanf("%d", &n);
 	
 	int a[n];
 	
 	for (int i = 0; i < n; i++) {
 		printf("Nhap phan tu thu %d: ", i + 1);
 		scanf("%d", &a[i]);
 	
	 printf("\n");
 	
	 }
	     
		printf("Mang a: ");
	for (int i = 0; i < n; i++) {	
	 	scanf("%d",a[i]);
}     
     printf("\n");  
	    
        printf("Cac so chan: ");
    for (int i = 0; i < n; i++) {
    	if (a[i]%2 == 0)
        printf("%d", a[i]);
    }
    	
	return 0;
}	 	
