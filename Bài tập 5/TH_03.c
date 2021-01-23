#include <stdio.h> 
 int a, b, c;
 int so_lon_nhat(int a, int b, int c);
 
 int main() {
 	
 	printf("Nhap a = ");
    scanf("%d", &a);
	printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);
    
    
    if(a > b && a > c) 
    printf("So lon nhat la %d", a);
    
    else if(b > a && b > c)
	printf("So lon nhat %d", b);
	
	else 
	printf("So lon nhat la %d", c);      

    return 0;
}    
   int so_lon_nhat(int a, int b, int c) {
   	
   	
   	return 0;
}   	
