#include <stdio.h> 
int main() {
	int n;
	int S = 0;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		S = S + i;
}
    printf("\nTong la: %d ", S);
	
	return 0;
}				
