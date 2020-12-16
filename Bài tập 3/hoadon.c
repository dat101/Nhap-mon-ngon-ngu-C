#include <stdio.h>

int main() {
// nhap bien dongia, soluong,thanhtien tu ban phim
	double dongia, soluong, thanhtien;
printf("Nhap so luong mat hang =");
scanf("%fl", &soluong);
printf("Nhap don gia mat hang =");
scanf("%fl", &dongia);
    if (soluong >=5 ) {
// tinh thanh tien, giam gia 25% khi mua tren 5 mat hang
thanhtien=(dongia*soluong)*0.75;
  	}else {
printf("so tien can phai tra la =");
scanf("%fl", &thanhtien);
 }
  getchar();
  return 0;
 } 		
