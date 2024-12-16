#include<stdio.h>
int main(){
	int n;
	printf("nhap n");
	scanf("%d",&n);
	 if (n % 3 == 0 && n % 5 == 0) {
		printf(" %d chia het cho 3 && 5 ",n);}
		else if(n%5==0){
		printf(" %d chia het cho 3 ",n);}
		else if(n%3==0){
		printf(" %d chia het cho 3 ",n);}
	else 
	printf("khong chia duoc so nao ca ");
		return 0;
	}