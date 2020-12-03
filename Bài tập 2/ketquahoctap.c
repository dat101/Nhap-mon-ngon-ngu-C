#include <stdio.h>
    //Nhap diem van va diem toan tu ban phim
int main(void) {
	int v, t, dtb;
printf("Nhap v= ");
scanf("%d", &v);
printf("Nhap t= ");
scanf("%d", &t);
    //Tong diem trung binh van va toan
printf("v + t = %d", v + t );
dtb=(v+t)/2;
    //Hien thi diem van, toan, diem trung binh
printf("Diemvan(v)\tDiemtoan(t)\tDiemtrungbinh(dtb)\n");
printf("%d\t%d\t%d", t, v, dtb);

return 0;
}
