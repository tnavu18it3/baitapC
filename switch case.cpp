#include<stdio.h>
#include<conio.h>
int main(){
	int luachon;
	printf("\n     MENU     \n1.Tinh tong 2 so nguyen\n2.Tinh hieu 2 so nguyen\n3.tinh tich 2 so nguyen\n4.Chia 2 so nguyen\n0.thoat\n.Ban chon ?");
	scanf("%d",&luachon);
	switch(luachon){
		case 0 : break;
		case 1 :{
			int a,b;
			printf("\nnhap a va b");
			scanf("%d%d",&a,&b);
			printf("\n%d+%d=%d",a,b,a+b);
			break;
		}
		case 2:{
			int a,b;
			printf("\nnhap a va b");
			scanf("%d%d",&a,&b);
			printf("\n%d-%d=%d",a,b,a-b);
			break;
		}
		case 3 :{
			int a,b;
			printf("\nnhap a va b");
			scanf("%d%d",&a,&b);
			printf("\n%d*%d=%d",a,b,a*b);
			break;
		}
		case 4 :{
			int a,b;
			printf("\nnhap a va b");
			scanf("%d%d",&a,&b);
			printf("\n%d/%d=%d",a,b,a/b);
			break;
		}
	}
	return 0 ;
}
