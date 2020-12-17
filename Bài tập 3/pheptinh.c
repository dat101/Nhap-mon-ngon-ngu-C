#include <stdio.h>

int main(void) {
  int a = 5 , b = 6;
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
			    
  	
