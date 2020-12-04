#include <stdio.h>
    //Nhap diem van va diem toan tu ban phim
int main(void) {
	double v, t, dtb;
printf("Nhap v= ");
scanf("%lf", &v);
printf("Nhap t= ");
scanf("%lf", &t);
    //Tong diem trung binh van va toan
dtb=(v+t)/2;
    //Hien thi diem van, toan, diem trung binh
printf("Diem van(v)\tDiem toan(t)\tDiem trung binh(dtb)\n");
printf("%.2f\t%.2f\t%.2f", t, v, dtb);

return 0;
}
