#include<stdio.h>
 int main() {
 	int n,i;
 	int m;
 	
 	printf("Nhap n = ");
 	scanf("%d", &n);
 	
 	int a[n];
 	
 	for (i = 0; i < n; i++) {
 		printf("a[%d]: ", i);
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
	   
	printf("\nSo phan tu co gia tri la ");

   else 
   printf("\nKhong ton tai m trong mang a");
   break;

}		
	return 0;
	}
