#include<stdio.h>
int main(){
	int mang[100];
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf("%d",&mang[i]);
	}
	// in ra cac phan tu cua mang da nhap
		for(int i=0;i<n;i++){
			printf("mang[%d]=%d",i,mang[i]);
		}
	// tinh tong giai thua cac phan tu trong mang
	    int S=0;
	    int i;
	    for(i=1;i<=n;i++)
		{
	    	S=S*i;
		}
		printf("\nTong giai thua la: %d",S);
	//	
}

