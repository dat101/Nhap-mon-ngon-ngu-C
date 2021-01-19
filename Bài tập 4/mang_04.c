#include<stdio.h>
 int main() {
 	int n;
 	int tong = 0;
 	
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
	    
	for (int i = 0; i < n; i++) {
	    tong = tong + a[i];
		printf("%d", a[i]);
}
     printf("\nTong cac phan tu mang a: %d", tong);		   
        
    	
	return 0;
}	 	
