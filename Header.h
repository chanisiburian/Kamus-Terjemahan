#include<stdio.h>
#include<stdlib.h>
#include <string.h>	

typedef struct SProyek BatakIndonesia;


struct SProyek{
	FILE *BUKUINDO;
	FILE *BUKUBATAK;
	FILE *CETAKINDOBATAK;
	char *a;
	char *b;
};



void TampilBatak(BatakIndonesia * ptr);
void TampilIndonesia(BatakIndonesia * ptr);
void translateIndonesiaBatak(BatakIndonesia * ptr);
void translateBatakIndonesia(BatakIndonesia * ptr);
void translateIndonesiaBatakTXT(BatakIndonesia * ptr);

