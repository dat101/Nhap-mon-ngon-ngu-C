#include<stdio.h>
   int main() { 	
   int n,i; 	int m; 	 
        printf("Nhap n = "); 	
        scanf("%d", &n);
 	 	
     int a[n];
 	 	
    for (i = 0; i < n; i++) { 		
        printf("Nhap phan tu thu %d: ", i + 1); 		
        scanf("%d", &a[i]); 		 
        
    printf("\n");	 		 
}	 	
	printf("Mang a: ");	
    for (i = 0; i < n; i++) {		 	
        printf("%d ",a[i]);
} 

    printf("\n"); 
    
    int dem_chan = 0, dem_le = 0;
    
for (i = 0; i < n; i++) {
    if(a[i] % 2 == 0)
        dem_chan = dem_chan + i;
    else 
	dem_le = dem_le + i;
}
     printf("Cac so le: 0, %d\n", dem_le);
     printf("Cac so chan: 0, %d", dem_chan);
      
   return 0;
}
