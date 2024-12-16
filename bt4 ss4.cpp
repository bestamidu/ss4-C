#include<stdio.h>
int main(){
	int month;
	printf("nhap month");
	scanf("%d",&month);
	switch (month){
		  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		  	printf(" %d co 31 ngay ", month);
		  	break;
		   case 4: case 6: case 9: case 11:	
		   	printf(" %d co 30 ngay ", month);
		   		break;12
		   	case 2 : 
		   	 	printf(" %d co 29 ngay ", month);
		   	 	default:
		   	 		  	printf(" %d thang khong hop le ", month);}
		   	return 0;
	}