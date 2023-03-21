#include <iostream>
#include <stdio.h>
using namespace std;

int main (void) {
	
	char barang[100];
	int total, harga, diskon;
	float jumlah, uang, jumlah_barang;
	
	printf("---=====# Program Penjualan #=====---\n");
	printf("-------------------------------------\n");
	printf("Masukan Nama Barang   : "); scanf("%s8\n", &barang);
	printf("Masukan Jumlah Barang : "); scanf("%d8\n", &total);
	printf("Masukan Harga Barang  : "); scanf("%d8\n", &harga);
	printf("Masukan Diskon Barang : "); scanf("%d8\n", &diskon);
    printf("Masukan Jumlah Uang   : "); scanf("%f8\n", &uang);	
    
	jumlah = harga * total * diskon/100;
	
	printf("-------------------------------------\n");
	printf("Nama Barang       : %s\n", barang);
	printf("Jumlah Barang     : %d\n", total);
	printf("Harga Barang      : %d\n", harga);
	printf("Jumlah Diskon <%> : %d.%\n", diskon);
	printf("--------------------------------------\n");
	printf("Total Harga Belanja : Rp.%.2f\n", jumlah);
	printf("--------------------------------------\n");
	
	jumlah_barang = jumlah - uang;
	
	printf("----=====# ~Struk Program~ #=====----\n");
	printf("/////////////////////////////////////\n");
	printf("Jumlah Uang Masuk : %.2f\n", uang);
	printf("Total Belanja     : %.2f\n", jumlah);
	printf("Jumlah Diskon <%> : %d.%\n", diskon);
	printf("/////////////////////////////////////\n");
	printf("Total Kembalian Belanja : Rp.%.2f\n", jumlah_barang);
	printf("======================================\n");
	printf(" ~~~TERIMAKASIH TELAH BERBELANJA~~~ ");
	
	return 0; 	
}