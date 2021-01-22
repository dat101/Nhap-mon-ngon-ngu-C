//Khoi khai bao
#include<stdio.h>
int pt_mang(int n);
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}

// khoi dinh nghia ham
  int pt_mang(int n) {
  	for (int i = 0; i < n; i++) {
 		printf("Nhap phan tu thu %d: ", i + 1);
 		scanf("%d", &a[i]);
	 	
	 }	     
		printf("phan tu mang a: ");
	for (int i = 0; i < n; i++) {	
	 	printf("%d",a[i]);
}     
    
        printf("Hien thi tong chan: ");
    for (int i = 0; i < n; i++) {
    	tong = tong + a[i];
    	if (a[i]%2 == 0)
		printf("%d", a[i]);
}
    int dem_chan = 0, dem_le = 0;
    
    for (i = 0; i < n; i++) {
    if(a[i] % 2 == 0)
        dem_chan = dem_chan + i;
    else 
	dem_le = dem_le + i;
}
    printf("Cac so le: %d\n", dem_le);
    printf("Cac so chan: %d", dem_chan);
    
    return 0;
}    
