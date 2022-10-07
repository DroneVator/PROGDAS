#include <stdio.h>

int main(){ 
	awal();
	JumlahPesanan();
}

int awal(){
	printf("\n===Warung Gak Normal===\n");
	printf("\nNo.\tMenu\t\Harga");
	printf("\n1.\tRawon\t\Rp15.000");
	printf("\n2.\tPecel\t\Rp8.000");
	printf("\n3.\tEs Teh\t\Rp2.500");
	printf("\n");
}

int JumlahPesanan(){
	int i = 1, banyak, total = 0;
	printf("\nSilahkan Pilih Jumlah Menu Yang Ingin Dipesan Qaqa : ");
	scanf("%i", &banyak);
	
	
	for (i = 1; i <= banyak; i++) 
	{
		total += pilihPesanan();
	}
	
	uang(total);
	
	
}

int pilihPesanan(){
	int pilih;
	
	
	kembali  :
	printf("\n***************************\n");
	printf("Pilih Menu : ");
	scanf("%i", &pilih);
	switch (pilih)
	{
		case 1:
			rawon();
			break;
		
		case 2:
			Pecel();
			break;
		
		case 3:
			EsTeh();
			break;
		
		default:
			printf("Pilihan Tidak Ada, Silahkan Memilih Kembali");
			goto kembali;
			break;
	}
}

int uang(int tagihan){
	int uang;
	kembali : 
	printf("\n\nMasukkan Uang Anda : Rp ");
	scanf("%i", &uang);
	
	if (!uang){
		printf("Anda Belum Memasukkan Jumlah Nominal ");
		goto kembali;
	}
	else{
		if (uang < tagihan){
			printf("Uang Anda Tidak Cukup");
			goto kembali;
		}
		else{
			akhir(uang, tagihan);
		}
	}
}

int akhir(int uang, int tagihan){
	int kembalian = uang - tagihan;
	printf("\n\n**************************\n");
	printf("\nGrand Total : Rp %i", tagihan);
	printf("\nUang Anda : Rp %i", uang);
	printf("\nUang Kembalian Anda : Rp %i", kembalian);
}

int rawon(){
	int banyak, total;
	int harga = 15000;
	printf("Masukkan Jumlah Pesanan : ");
	scanf("%i", &banyak);
	printf("Qty : %i Rawon", banyak);
	
	total = banyak * harga;
	printf("\nTotal harga : Rp %i", total);
	
	return total;
}

int Pecel(){
	int banyak, total;
	int harga = 8000;
	printf("Masukkan Jumlah Pesanan");
	scanf("%i", &banyak);
	printf("Qty : &i Pecel", banyak);
	
	total = banyak * harga;
	printf("\nTotal harga : Rp %i", total);
	
	return total;
}

int EsTeh(){
	int banyak, total;
	int harga = 2500;
	printf("Masukkan Jumlah Pesanan");
	scanf("%i", &banyak);
	printf("Qty : %i EsTeh", banyak);
	
	total = banyak * harga;
	printf("\nTotal harga : Rp %i", total);
	
	return total;
}