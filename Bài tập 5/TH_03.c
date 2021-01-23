#include <stdio.h> 
 int so_lon_nhat(int a, int b, int c);
 
 int main() {
 int a, b, c;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);
    
    
    if(a > b && a > c) 
    printf("So lon nhat la: %d", a);
    
    else if(b > a && b > c)
	printf("So lon nhat la: %d", b);
	 
    else if(c > a && c > b)
	printf("So lon nhat la %d", c);      
    
    else 
    printf("Co 2 hoac 3 so lon bang nhau");	 
	  
    return 0;
}    
   int so_lon_nhat(int a, int b, int c) {
   	
   	return 0;
}   	
