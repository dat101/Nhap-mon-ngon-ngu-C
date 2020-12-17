#include <stdio.h>
// chuong trinh khoi tao phep tinh
int main(void) {
  int a = 6 , b = 6;
  char pt;
  
  printf("Vui long nhap phep tinh (+ ,-): ");
  scanf("%c", &pt);
  
  switch(pt)
  {
  	case '+':
  	    printf("a + b = %d", a + b);
  	    break;
  	
	case '-':
	    printf("a - b = %d", a - b);
		break;
		
// phep tinh khong khop voi dau +, -
	default:
	    printf("loi! phep tinh khong chinh xac");		
}

return 0;
}
			    
  	
