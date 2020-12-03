#include <stdio.h>

int main(void) {
 double l;
 printf("nhap do dai can chuyen doi l = ");
 scanf("%lf", &l);
 printf("Met(m)\tXentimet(cm)\tMilimet(mm)\n");
 printf("%f\t%.f\t%.f", l, l*100, l*1000);
  return 0;
}
