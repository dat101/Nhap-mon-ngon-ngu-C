#include<stdio.h>

int main() {
int n, dem = 1;
    printf("N = ");
    scanf("%d", &n);
int j, i;

for (i = 1; i <= n; i++) 
    {
for (j = 1; j <= i; j++) 
    {
printf("%d", dem);
    dem++;
    }
printf("\n");

    }
   return 0;
}
