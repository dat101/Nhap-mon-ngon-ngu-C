#include <stdio.h>

int main(void) {
 double l;
 printf("nhap do dai can chuyen doi l = ");
 scanf("%lf", &l);
 printf("\nDo dai chuyen sang don vi xentimet la: %.f", l*100);
 printf("\nDo dai chuyen sang don vi milimet la: %.f", l*1000);
  return 0;
}
