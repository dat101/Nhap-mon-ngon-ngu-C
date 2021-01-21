#include<stdio.h>
 int main() {
 	int n,i;
 	int m;
 	
 	printf("Nhap n = ");
 	scanf("%d", &n);
 	
 	int a[n];
 	
 	for (i = 0; i < n; i++) {
 		printf("Nhap phan tu thu %d: ", i + 1);
 		scanf("%d", &a[i]);
 	
	 printf("\n");
	 	
	 }	     
		printf("Mang a: ");
	for (i = 0; i < n; i++) {	
	 	printf("%d ",a[i]);
}     
     printf("\n");  
	    
	printf("Nhap m = ");
	scanf("%d", &m);
	
	for (i = 0; i < n; i++) {
   if (a[i] == m) 

	printf("\nCo ton tai");
		
   else 
   printf("\nKhong ton tai");
   break;

}		
	return 0;
}	 	
