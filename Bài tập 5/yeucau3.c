#include <stdio.h> 
 int boi_chung_nho_nhat(int a, int b);
 
 int main(){
    int a,b,bc;
    printf("Nhap a: ");
    scanf("%d",&a);
    printf("Nhap b: ");
    scanf("%d",&b);
 
 for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN(%d,%d)= %d\n",a,b,bc);
        }
    }
    return 0;
}

 int boi_chung_nho_nhat(int a, int b) {
 	
 	return 0;
 }
