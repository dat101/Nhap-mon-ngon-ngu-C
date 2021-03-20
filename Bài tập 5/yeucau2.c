#include <stdio.h>
int main() {
    int r;
    float chuvi, dientich, Pi = 3.14159;

        printf("Nhap ban kinh r: ");
        scanf("%d", &r);

        chuvi = 2*Pi*r;
        dientich = Pi*r*r;

        printf("Chu vi hinh tron la: %f\n", chuvi);
        printf("Dien tich hinh tron la: %f", dientich);

    return 0;
}
