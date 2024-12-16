#include <stdio.h>

int main() {
    int canh1, canh2, canh3;
    printf("Nhap so canh 1: ");
    scanf("%d", &canh1);
    printf("Nhap so canh 2: ");
    scanf("%d", &canh2);
    printf("Nhap so canh 3: ");
    scanf("%d", &canh3);
    
    if(canh1>0 &&canh2>0 &&canh3>0 ){
    	 if (canh1 + canh2 > canh3 && canh1 + canh3 > canh2 && canh2 + canh3 > canh1) {
            printf("La 3 canh tam giac.\n");
        } else {
            printf("Khong phai 3 canh tam giac.\n");
        }
    } else {
        printf("Do dai canh phai lon hon 0.\n");
    }
    return 0;
}
	