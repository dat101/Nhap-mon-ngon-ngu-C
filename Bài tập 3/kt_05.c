#include <stdio.h>
 int main() {
    int i, n;
    int tongle = 0, tongchan = 0;
 
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            tongchan = tongchan + i;
        else
            tongle = tongle + i;
    }
    printf("Tong cua cac so le la: %d\n", tongle);
    printf("Tong cua cac so chan la: %d\n", tongchan);
 
  return 0;
}
