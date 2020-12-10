#include <stdio.h>

int main() {
// nhap bien dongia, soluong,thanhtien tu ban phim
	int dongia, soluong, thanhtien;
printf("Nhap don gia mat hang =");
scanf("%d", &dongia);
printf("Nhap so luong mat hang =");
scanf("%d", &soluong);
    if (soluong >=5 ) {
// tinh thanh tien, giam gia 25% khi mua tren 5 mat hang
thanhtien = ( dongia*soluong )*0.75;
  	}else {
 printf("%d", &thanhtien);
  }
 
  getchar();
  return 0;
 } 		
