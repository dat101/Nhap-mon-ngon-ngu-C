// khoi khai bao
#include<stdio.h>

    int sum(int a, int b, int c);
// khoi ham main
    int main () {
    	int a = 1, b = 2, c = 3; 
    	int tong = sum(a, b, c);
    	
    	printf("Tong la: %d", sum(a, b, c));
    
		return 0;
    
	}
// khoi dinh nghia ham	
		int sum(int a, int b, int c) {
		  
		 int tong = a+b+c;
		  
	return tong; 
      
}	
