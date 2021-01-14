#include<stdio.h>
 
int main() {
    int mang[4] = {3, 5, 7, 2};
	int i, tong = 0;
    
    for (i = 0; i < 4; i++) {
    	tong = tong + mang[i];
    	
        printf("%d ", mang[i]);
    }
        printf("\nTong cac so tu day tren la: %d", tong);
        
    return 0;
}
