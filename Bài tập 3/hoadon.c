#include <stdio.h>

int main() {
// nhap bien dongia, soluong,thanhtien tu ban phim
	double dongia, soluong, thanhtien;
printf("Nhap don gia mat hang =");
scanf("%fl", &dongia);
printf("Nhap so luong mat hang =");
scanf("%fl", &soluong);
    if (soluong >=5 ) {
// tinh thanh tien, giam gia 25% khi mua tren 5 mat hang
thanhtien = ( dongia*soluong )*0.75;
  	}else {
 printf("Don gia\tso luong\tthanh tien\n");
 printf("%.f\t%.f\t%.f", dongia, soluong, thanhtien);
}
 
  getchar();
  return 0;
 } 		
