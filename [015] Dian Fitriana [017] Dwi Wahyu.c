#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void tambahdata();
void lihatdata();
void ubahdata();
void pencariandata();
void pengurutandata();

struct datemodified
{
	int tanggal;
	int bulan;
	int tahun;
}; typedef struct datemodified  date;

struct jenis
{
	char jenisfile[50];
	char ekstensi[50];
}; typedef struct jenis jns;

struct file
{
	int idfile;
	char namafile[50];
	struct jenis jns;
	struct datemodified date;
	char owner[50];
}; typedef struct file fl;
fl folder[50];
void tambahdata()
{
	printf("\n\t=======================================");
	printf("\n\t ID FILE		: ");
	scanf("%d", &folder[i].idfile);
	printf("\t NAMA FILE		: ");
	scanf("%s", &folder[i].namafile);
	printf("\t JENIS FILE 		: ");
	scanf("%s", &folder[i].jns.jenisfile);
	printf("\t EKSTENSI FILE		: ");
	scanf("%s", &folder[i].jns.ekstensi);
	printf("\t TANGGAL 		: ");
	scanf("%d", &folder[i].date.tanggal);
	printf("\t BULAN 			: ");
	scanf("%d", &folder[i].date.bulan);
	printf("\t TAHUN 			: ");
	scanf("%d", &folder[i].date.tahun);
	printf("\t OWNER 			: ");
	scanf("%s", &folder[i].owner);
	printf("\t=======================================");
	printf("\n\tTekan untuk kembali ke menu!");
	i++;	
	getch();
	system("cls");
}

void lihatdata()
{
	if(i!=0)
	{
		while(a<i)
		{
			printf("\n\t=======================================");
			printf("\n\t=          DATA FILE KE %d            =", b);
			printf("\n\t=======================================");
			printf("\n\t ID FILE		: %d", folder[a].idfile);
			printf("\n\t NAMA FILE		: %s", folder[a].namafile);
			printf("\n\t JENIS FILE		: %s", folder[a].jns.jenisfile);
			printf("\n\t EKSTENSI FILE		: %s", folder[a].jns.ekstensi);
			printf("\n\t TANGGAL		: %d", folder[a].date.tanggal);
			printf("\n\t BULAN			: %d", folder[a].date.bulan);
			printf("\n\t TAHUN			: %d", folder[a].date.tahun);
			printf("\n\t OWNER			: %s", folder[a].owner);
			printf("\n\t=======================================");
	        a++;
	        b++;
	    }
	    a=0;
	    b=1;
	    printf("\n\t TEKAN TERSERAH UNTUK KEMBALI KE MENU!!!");
	}	
	
	else if(i==0)
	{
		printf("\n\tHARAP MENAMBAHKAN DATA TERLEBIH DAHULU!!!");
	}
	getch();
	system("cls");
}

main()
{
	int pilihan;
	
	printf("\n\t======================================");
	printf("\n\t= FINAL PROJECT PEMROGRAMAN LANJUT A =");
	printf("\n\t=    APLIKASI DIREKTORI (FOLDER)     =");
	printf("\n\t======================================");
	printf("\n\t=  DIAN FITRIANA     [18081010015]   =");
	printf("\n\t=  DWI WAHYU EFFENDI [18081010017]   =");
	printf("\n\t======================================");
	printf("\n\tTEKAN TERSERAH UNTUK MEMULAI PROGRAM!!");
	getch();
	system("cls");
	menu:
	printf("\n\t=============================================");
	printf("\n\t=    PILIH MENU OPSI DIREKTORI (FOLDER)     =");    
	printf("\n\t=============================================");   
	printf("\n\t1. TAMBAH DATA\n");
	printf("\t2. LIHAT DATA\n");
	printf("\t3. UBAH DATA\n");
	printf("\t4. PENCARIAN DATA\n");
	printf("\t5. PENGURUTAN DATA\n");
	printf("\t6. Keluar\n");
	printf("\t============================================="); 
	printf("\n\tMASUKKAN PILIHAN OPSI : ");
	scanf("%d", &pilihan);
	system("cls");
	
	switch(pilihan)
	{
		case 1 :
			tambahdata();
			goto menu;
		case 2 :
			lihatdata();
			goto menu;
		case 3 :
			ubahdata();
			goto menu;
		case 4 :
			pencariandata();
			goto menu;
		case 5 :
			pengurutandata();
			goto menu;
		case 6 :
			printf("\n\t====== TERIMAKASIH TELAH MENGGUNAKAN PROGRAM SEDERHANA INI ======");
			getch();
			return 0;
		default : 
			printf("\n\tMASUKKAN PILIHAN YANG BENAR (1-6)");
			getch();
			system("cls");
			goto menu;
			break;
	}
}
