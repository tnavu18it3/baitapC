#include<stdio.h>
#include<conio.h>
#include<string.h>
int giaithua(int n){
	int i, giaithua=1;
    for(i = 1; i <= n; i++)
    {
        giaithua*=i;
    }
   	return giaithua; 
}
int main(){
	int n,i,j,s=0;
//NHAP MANG
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for ( i = 0; i < n; ++i){
		printf("a[%d] = ",i);
		scanf("%d",& a[i]);		
	}
//IN MANG
	printf("Mang ban vua nhap :\n");
	for (int i = 0; i < n ; ++i)
		printf(" a[%d]= %d\n",i,a[i]);
//TONG GIAI THUA CUA CAC PHAN TU TRONG MANG
	for (j=0 ; j<n ;j++){
		s=s+giaithua(a[j]);
	}
	printf("tong giai thua cac phan tu trong mang: s=%d",s);
//NHAP VAO MOT 1 CHUOI VA DEM XEM CHUOI CO BAO NHIEU KI TU
	char chuoi[100];
	printf("\nNhap vao mot chuoi bat ky :");
	scanf("%s",chuoi);
	int k=0,dem=0;
	while(k<10){
		if(chuoi[k]!='\0') dem++;
		else break;
		k++;
	
	}
	printf("Chuoi ban da nhap co %d ky tu",dem);
	return  0;
	}

