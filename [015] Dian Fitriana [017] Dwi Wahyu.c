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
