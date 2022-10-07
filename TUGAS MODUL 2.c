#include <stdio.h>

int luaskubus(float sisi){	
float luas = 6 * (sisi * sisi);
return luas;
}

int volumekubus(float sisi){
float volume = sisi * sisi * sisi;
return volume;
}

int luasbalok(float panjang, float lebar, float tinggi){
float luas = 2*(panjang * lebar + lebar* tinggi + panjang * tinggi);
return luas;
}

int volumebalok(float panjang, float lebar, float tinggi){
float volume = panjang * lebar * tinggi;
return volume;
}

int luastabung(float phi, float r){
	float luas;
	luas = 22/7 * r * 2;
	return luas;
}

int volumetabung(float r, float t, float phi){
	float volume;
	volume = 22/7 * r * t;
	return volume;
}

int main () {
	float sisi = 10;
	float panjang = 40;
	float lebar = 20;
	float tinggi = 10;
	float r = 5;
	float t = 10;
	float phi = 22/7;
	
	float luas = luaskubus(sisi);
	float volume = volumekubus(sisi);
	float luas_Balok = luasbalok(panjang, lebar, tinggi);
	float volume_Balok = volumebalok(panjang, lebar, tinggi);
	float luas_tabung = luastabung(22/7, r);
	float volume_tabung = volumetabung(22/7, r, t);
	
	printf("Hasil dari luas kubus = %f cm^3", luas);
	printf("\nHasil dari volume kubus = %f cm^3", volume);
	printf("\n");
	printf("\nHasil Dari luas_Balok = %f cm^3", luas);
	printf("\nHasil Dari volume_Balok = %f cm^3", volume);
	printf("\n");
	printf("\nHasil Dari luas tabung = %f cm^3", luaskubus);
	printf("\nHasil Dari volume tabung = %f cm^3", volume);
	
	return 0;
	
}
