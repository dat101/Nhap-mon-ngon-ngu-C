#include<stdio.h>
int main(){
    int i;
    int s = 0;
    
    int n = 123;
    while (n!=0) {
    	s = s + n%10;
    	n = n/10;
    }	
    printf("%d",s);
  
    return 0;
}
