 #include <stdio.h>


int main(){
	int perogdas, orkom, PTI, kalkulus;
	printf("Masukan Nilai Pemrograman Dasar : ");
	scanf("%i", &perogdas);
	printf("Masukan Nilai Kalkulus : ");
	scanf("%i", &kalkulus);
	printf("Masukan Nilai PTI : ");
	scanf("%i", &PTI);
	printf("Masukan Nilai Orkom : ");
	scanf("%i", &orkom);
	
	int hasil = (perogdas + orkom + PTI + kalkulus) / 4;
	
	if(hasil >= 75){
		printf("Lulus : %i", hasil);
	}
	else{
		printf("Tidak Lulus : %i", hasil);
		return 0;
	}
} 