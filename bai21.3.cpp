#include<stdio.h>
#include<string.h>

typedef struct sinhVien{
	char maThiSinh[10];
	char hoTen[30];
	float diemToan, diemLy, diemHoa;
}SV;

void nhapThongTinThiSinh(SV &x){
	scanf("%s",x.maThiSinh);
    fflush(stdin);
    gets(x.hoTen);
	scanf("%f%f%f",&x.diemToan,&x.diemLy,&x.diemHoa);
}

float tinhDiem(SV x){
 return x.diemHoa+x.diemLy+x.diemToan;
}

void xuatThongTin(SV x){
	printf("%s ",x.maThiSinh);
	printf("%s ",x.hoTen);
//	printf("%.1f",tinhDiem(x));
}
int main(){
	SV x;
	nhapThongTinThiSinh(x);
	float t = tinhDiem(x);
	xuatThongTin(x);
	char s[4];
	s[0] = x.maThiSinh[0];
	s[1] = x.maThiSinh[1];
	s[2] = x.maThiSinh[2];
	if(strcmp(s,"KV1")==0){
		printf("1 ");
		t += 0.5;
	}
	else if(strcmp(s,"KV2")==0){
		printf("2 ");
		t += 1;
	}else{
		printf("3 ");
		t += 2;
	}
	printf("%.1f ",t);
	if(t<26) printf("TRUOT");
	else printf("TRUNG TUYEN");
	return 0; 
}
