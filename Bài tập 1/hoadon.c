#include <stdio.h>

int main() {
// nhap bien dongia, soluong,thanhtien tu ban phim
	float dongia, soluong, thanhtien;
printf("Nhap so luong mat hang = ");
scanf("%fl", &soluong);
printf("Nhap don gia mat hang = ");
scanf("%fl", &dongia);
// tinh thanh tien, giam gia 50% khi mua tren 5 mat hang va don gia tren 500
    if (soluong >=5 && dongia >=500 ) {
thanhtien=(dongia*soluong)*0.5;
printf("So tien can phai tra la = %.f", thanhtien);
  	}else {
printf("%.f", thanhtien);

 }
  getchar();
  return 0;
 } 		
