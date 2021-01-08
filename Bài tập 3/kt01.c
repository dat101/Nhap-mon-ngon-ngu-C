#include <stdio.h>
 
int main(){
	int i, j;
	
       printf("-----Bang cuu chuong-----\n\n ");
	 
    for(i = 2; i <= 4;i++) {
		
    for(j = 1; j <= 3; j++){
	    
       printf("\t%d x %d = %d\n", i, j, i*j);
       
   }
   }
    return 0;
}	   
