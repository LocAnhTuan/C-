#include<stdio.h>
#include<string.h>
 typedef struct ngaysinh{
	int ngay,thang,nam;
}NS;
typedef struct sinhVien{
	char hoTen[30];
	NS ngayThangNam;
	double diem1, diem2, diem3, tongDiem;
}SV;
int n;
SV A[10];
void nhapThongTinSinhVien(SV &x){
	fflush(stdin);
	gets(x.hoTen);
	scanf("%2d%2d%4d",&x.ngayThangNam.ngay,&x.ngayThangNam.thang,&x.ngayThangNam.nam);
	scanf("%lf%lf%lf",&x.diem1,&x.diem2,&x.diem3);
}
void xuatThongTinSinhVien(SV x){
    
	printf("%s ",x.hoTen);
	printf("%00d/%00d/%0000d ",x.ngayThangNam.ngay,x.ngayThangNam.thang,x.ngayThangNam.nam);
	printf("%.lf",(x.diem1+x.diem2+x.diem3)/3);
}

int main(){
	SV x;
	nhapThongTinSinhVien(x);
	xuatThongTinSinhVien(x);
}
