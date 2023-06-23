#include <stdio.h>
#include "Header.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void TampilBatak(BatakIndonesia * ptr)
{
	ptr->a = (char*)malloc(sizeof(char)*1000000);
	ptr->b = (char*)malloc(sizeof(char)*1000000);
	ptr->BUKUBATAK = fopen("data_kelompok_011/kata_batak.txt","r");
	ptr->BUKUINDO = fopen("data_kelompok_011/kata_indonesia.txt","r");
	char pembeda[]="\n";
	while(!feof(ptr->BUKUBATAK) && !feof(ptr->BUKUINDO)){
		fgets(ptr->a,100000,ptr->BUKUBATAK);
		strtok(ptr->a, pembeda);
		printf("%s = ", ptr->a);
		fgets(ptr->b,100000,ptr->BUKUINDO);
		printf("%s", ptr->b);
	}
}
void TampilIndonesia(BatakIndonesia * ptr)
{
	ptr->a = (char*)malloc(sizeof(char)*1000000);
	ptr->b = (char*)malloc(sizeof(char)*1000000);
	ptr->BUKUBATAK = fopen("data_kelompok_011/kata_batak.txt","r");
	ptr->BUKUINDO = fopen("data_kelompok_011/kata_indonesia.txt","r");
	char pembeda[]="\n";
	while(!feof(ptr->BUKUBATAK) && !feof(ptr->BUKUINDO)){
		fgets(ptr->b,100000,ptr->BUKUINDO);
		strtok(ptr->b, pembeda);
		printf("%s = ", ptr->b);
		fgets(ptr->a,100000,ptr->BUKUBATAK);
		printf("%s", ptr->a);
	}
}
void translateIndonesiaBatak(BatakIndonesia * ptr)
{	
	char pemisah[] = "\n";
	ptr->BUKUINDO = fopen("data_kelompok_011/kata_indonesia.txt","r");
	ptr->BUKUBATAK = fopen("data_kelompok_011/kata_batak.txt","r");
	ptr->a = (char*)malloc(sizeof(char)*1000000);
	ptr->b = (char*)malloc(sizeof(char)*1000000);
	char masuk[10];
	printf("Masukkan kata Indonesia : ");
	scanf(" %[^\n]s", masuk);
	while(!feof(ptr->BUKUINDO)){
		fgets(ptr->a, 999999999, ptr->BUKUINDO);
		fgets(ptr->b, 999999999, ptr->BUKUBATAK);
		strtok(ptr->a, pemisah);
		if(strcmp(ptr->a, masuk) == 0){
			printf("|_|_|_|_|_|_|_|_|_\n");
			printf("%s", ptr->b);
			printf("|_|_|_|_|_|_|_|_|_\n");
		}
	}
	fclose(ptr->BUKUINDO);
	fclose(ptr->BUKUBATAK);
	fclose(ptr->CETAKINDOBATAK);
}
void translateBatakIndonesia(BatakIndonesia * ptr)
{	
	char pemisah[] = "\n";
	ptr->BUKUINDO = fopen("data_kelompok_011/kata_indonesia.txt","r");
	ptr->BUKUBATAK = fopen("data_kelompok_011/kata_batak.txt","r");
	ptr->a = (char*)malloc(sizeof(char)*1000000);
	ptr->b = (char*)malloc(sizeof(char)*1000000);
	char masuk[10];
	printf("Masukkan kata Batak : ");
	scanf(" %[^\n]s", masuk);
	while(!feof(ptr->BUKUBATAK)){
		fgets(ptr->b, 999999999, ptr->BUKUBATAK);
		fgets(ptr->a, 999999999, ptr->BUKUINDO);
		strtok(ptr->b, pemisah);
		if(strcmp(ptr->b, masuk) == 0){
			printf("|_|_|_|_|_|_|_|_|_\n");
			printf("%s", ptr->a);
			printf("|_|_|_|_|_|_|_|_|_\n");
		}
	}
	fclose(ptr->BUKUINDO);
	fclose(ptr->BUKUBATAK);
	fclose(ptr->CETAKINDOBATAK);
}

void translateIndonesiaBatakTXT(BatakIndonesia * ptr)
{	
	char pemisah[] = "\n";
	ptr->BUKUINDO = fopen("data_kelompok_011/kata_indonesia.txt","r");
	ptr->BUKUBATAK = fopen("data_kelompok_011/kata_batak.txt","r");
	ptr->CETAKINDOBATAK = fopen("data_kelompok_011/hasil.txt", "a");
	ptr->a = (char*)malloc(sizeof(char)*1000000);
	ptr->b = (char*)malloc(sizeof(char)*1000000);
	char masuk[10];
	printf("Masukkan kata Indonesia : ");
	scanf(" %[^\n]s", masuk);
	while(!feof(ptr->BUKUINDO)){
		fgets(ptr->a, 999999999, ptr->BUKUINDO);
		fgets(ptr->b, 999999999, ptr->BUKUBATAK);
		strtok(ptr->a, pemisah);
		if(strcmp(ptr->a, masuk) == 0){
			printf("|_|_|_|_|_|_|_|_|_\n");
			printf("%s", ptr->b);
			printf("|_|_|_|_|_|_|_|_|_\n");
			
			fputs(masuk, ptr->CETAKINDOBATAK);
			fputs(" = ", ptr->CETAKINDOBATAK);
			fputs(ptr->b, ptr->CETAKINDOBATAK);
		}
	}
	fclose(ptr->BUKUINDO);
	fclose(ptr->BUKUBATAK);
	fclose(ptr->CETAKINDOBATAK);
}
