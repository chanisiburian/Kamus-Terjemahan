#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include <string.h>

int main(){
	int pilih;
	BatakIndonesia *dataBatak = (BatakIndonesia*)malloc(sizeof(BatakIndonesia));
	BatakIndonesia *dataIndonesia = (BatakIndonesia*)malloc(sizeof(BatakIndonesia));
	BatakIndonesia *translateIndoBatak = (BatakIndonesia*)malloc(sizeof(BatakIndonesia));
	BatakIndonesia *translateBatakIndo = (BatakIndonesia*)malloc(sizeof(BatakIndonesia));
	BatakIndonesia *cetak = (BatakIndonesia*)malloc(sizeof(BatakIndonesia));
	while(1==1)
	{
		puts("\n\n\n1.Tampilkan Teks Batak");
		puts("2.Tampilkan Teks Indonesia");
		puts("3.Translate Indonesia - batak");
		puts("4.Translate Batak - Indonesia");
		puts("5.cetak hasil terjemahan");
		puts("6.kluar");
		scanf("%d",&pilih);
		if(pilih == 1){
			TampilBatak(dataBatak);
		}
		else if(pilih == 2){
			TampilIndonesia(dataIndonesia);
		}
		else if(pilih == 3){
			translateIndonesiaBatak(translateIndoBatak);
		}
		else if(pilih == 4){
			translateBatakIndonesia(translateBatakIndo);
		}
		else if(pilih == 5){
			translateIndonesiaBatakTXT(cetak);
		}
		else if(pilih == 6){
			printf("terima kasih\n");
			exit(0);
		}
	}
}
