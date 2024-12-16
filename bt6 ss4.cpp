#include <stdio.h>

int main() {
    int chiSoDau, chiSoCuoi, soDienTieuThu;
    float tienDien;
    printf("Nhap chi so cong to dien dau thang: ");
    scanf("%d", &chiSoDau);
    printf("Nhap chi so cong to dien cuoi thang: ");
    scanf("%d", &chiSoCuoi);
    soDienTieuThu= chiSoCuoi-chiSoDau;
    if(0<=soDienTieuThu<50){
    	tienDien=soDienTieuThu*10000;}
    else if (50<=soDienTieuThu<100){
    tienDien=50*10000+(soDienTieuThu-50) *15000;}
     else if (100<=soDienTieuThu<150){
    tienDien=50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;}
     else if (150<=soDienTieuThu<200){
    tienDien=50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;}
     else if (200<=soDienTieuThu){
    tienDien=50 * 10000 + 50 * 15000 + 50 * 20000 + 50*25000 + (soDienTieuThu - 200);}
     printf("So tien dien phai tra la: %.2f VND\n", tienDien);
    return 0;
}
