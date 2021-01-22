// Khoi khai bao
#include<stdio.h>
int n; 
int i;

void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]);
void Dem_chan_le_0(int a[]);

 //khoi ham main
int main(){
  
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
void Nhap_pt_mang(int a[]) {
	
  	for (i = 0; i < n; i++) {
 		printf("Nhap phan tu thu %d: ", i + 1);
 		scanf("%d", &a[i]);
	 	
}
}	 
	
void Hien_thi_pt_mang(int a[]) {     
 		printf("\nphan tu mang a: ");
	for (i = 0; i < n; i++) {	
	 	printf("%d ",a[i]);
} 
}
    
void Hien_thi_tong_chan(int a[]) {
        printf("\nHien thi tong chan: ");    
    for (i = 0; i < n; i++) {
    	int tong = 0;
    	tong = tong + a[i];
    	if (a[i] % 2 == 0)
		printf("%d", a[i]);
}
}

void Dem_chan_le_0(int a[]) {
    	
    int dem_chan = 0, dem_le = 0;
    
    for (i = 0; i < n; i++) {
    if(a[i] % 2 == 0)
        dem_chan = dem_chan + i;
    else 
	dem_le = dem_le + i;
}
    printf("\nCac so chan: %d", dem_chan);
    printf("\nCac so le: %d", dem_le);
  
}
