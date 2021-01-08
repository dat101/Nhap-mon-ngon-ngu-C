#include <stdio.h>

int main(){

for(int s = 1 ; s <= 20 ; s++) {

if (s == 5 || s == 11 || s == 15)
   continue;

   printf("%d ",s);
}

 return 0;
} 
------------------------------------------
#include <stdio.h>

int main(){

int s = 1; 
while( s <= 20 ) {

s++;
if (s == 5 || s == 11 || s == 15)
   continue;

   printf("%d ",s);
}

 return 0;
} 
