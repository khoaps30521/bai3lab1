#include<stdio.h>
int main()
{
	int n,a[10],dem,tong;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	for (int i=0 ;i<n;i++){
		printf(" a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	for (int i=0 ;i<n;i++){
		if(a[i]%2==0){
			dem++;
			tong=tong+a[i];
		}
			
	}
	printf("trung binh cong cua cac so chan la:%d",tong/dem);
return 0;	
}

