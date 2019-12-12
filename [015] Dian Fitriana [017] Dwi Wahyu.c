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
	int cari;
	int urut;
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

int i = 0, a = 0, b = 1, cariid, hasil;

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

void mergeSort1(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (folder[x].idfile <= folder[y].idfile)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (folder[x].idfile >= folder[y].idfile)
        	{
            	temp[z++] = folder[y++];
        	}
    	}

	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void mergeSort2(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (strcmp(folder[x].namafile,folder[y].namafile)<=0)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (strcmp(folder[x].namafile , folder[y].namafile)>=0)
        	{
            	temp[z++] = folder[y++];
        	}
    	}
	
	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void mergeSort3(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (strcmp(folder[x].jns.jenisfile,folder[y].jns.jenisfile)<=0)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (strcmp(folder[x].jns.jenisfile, folder[y].jns.jenisfile)>=0)
        	{
            	temp[z++] = folder[y++];
        	}
    	}
	
	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void mergeSort4(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (strcmp(folder[x].jns.ekstensi,folder[y].jns.ekstensi)<=0)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (strcmp(folder[x].jns.ekstensi, folder[y].jns.ekstensi)>=0)
        	{
            	temp[z++] = folder[y++];
        	}
    	}
	
	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void mergeSort5(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (strcmp(folder[x].owner,folder[y].owner)<=0)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (strcmp(folder[x].owner, folder[y].owner)>=0)
        	{
            	temp[z++] = folder[y++];
        	}
    	}
	
	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void mergeSort6(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (folder[x].date.tanggal <= folder[y].date.tanggal)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (folder[x].date.tanggal >= folder[y].date.tanggal)
        	{
            	temp[z++] = folder[y++];
        	}
    	}
	
	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void mergeSort7(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (folder[x].date.bulan <= folder[y].date.bulan)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (folder[x].date.bulan >= folder[y].date.bulan)
        	{
            	temp[z++] = folder[y++];
        	}
    	}
	
	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void mergeSort8(int low, int mid, int high)
{
	int x = low;
	int y = mid + 1;
	int z = low;
	struct file temp[high+1];

   		while(x <= mid && y <= high)
		{
        	if (folder[x].date.tahun <= folder[y].date.tahun)
        	{
            	temp[z++] = folder[x++];
        	}
        	else if (folder[x].date.tahun >= folder[y].date.tahun)
        	{
            	temp[z++] = folder[y++];
        	}
    	}
	
	while(x<=mid)
	{
		temp[z++] = folder[x++];
	}

	while(y<=high)
	{
		temp[z++] = folder[y++];
	}   
	 
	for(x = low; x <= high; x++)
    {
        folder[x] = temp[x];
    }
}

void partition(int low, int high, int cari)
{
	int mid;
    if(low < high)
    {
    	if(cari==1)
    	{
        mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort1(low, mid, high); //id file
    	}
    	else if(cari==2)
    	{
    	mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort2(low, mid, high); // nama file
		}
	  	else if(cari==3)
    	{
    	mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort3(low, mid, high); //jensi file
		}
	   	else if(cari==4)
    	{
    	mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort4(low, mid, high); //ekstensi file
		}
	   	else if(cari==5)
    	{
    	mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort5(low, mid, high); //owner file
		}
		else if(cari==6)
		{
		mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort6(low, mid, high); //tanggal
		}
		else if(cari==7)
		{
		mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort7(low, mid, high); //bulan
		}
		else if(cari==8)
		{
		mid = (low + high) / 2;
        partition(low, mid, cari);
        partition(mid + 1, high, cari);
        mergeSort8(low, mid, high); //tahun
		}
    }  
	else
	{
		return;	
	}	
}

int intersearch1(int cari, int low, int high, int urut)
{
	int posisi;
	
	if(urut==1)
	{
	posisi = ((cari - folder[low].idfile) * ((high-low) + low))/ (folder[high].idfile - folder[low].idfile);
	
	for(low = 0; low<=high ; low++)
	{
		if(folder[posisi].idfile == cari)
		{
			return posisi;
			break;
		}
		else if(folder[posisi].idfile < cari)
		{
			posisi = posisi + 1;
		}
	}
	}
	else if(urut==2)
	{
	posisi = ((cari - folder[low].date.tanggal) * ((high-low) + low))/ (folder[high].date.tanggal - folder[low].date.tanggal); 
	
	for(low = 0; low<=high ; low++)
	{
		if(folder[posisi].date.tanggal == cari)
		{
			return posisi;
			break;
		}
		else if(folder[posisi].date.tanggal < cari)
		{
			posisi = posisi + 1;
		}
	}
	}
	else if(urut==3)
	{
	posisi = ((cari - folder[low].date.bulan) * ((high-low) + low))/ (folder[high].date.bulan - folder[low].date.bulan);
	
	for(low = 0; low<=high ; low++)
	{
		if(folder[posisi].date.bulan == cari)
		{
			return posisi;
			break;
		}
		else if(folder[posisi].date.bulan < cari)
		{
			posisi = posisi + 1;
		}
	} 
	}
	else if(urut==4)
	{
	posisi = ((cari - folder[low].date.tahun) * ((high-low) + low))/ (folder[high].date.tahun - folder[low].date.tahun);

	for(low = 0; low<=high ; low++)
	{
		if(folder[posisi].date.tahun == cari)
		{
			return posisi;
			break;
		}
		else if(folder[posisi].date.tahun < cari)
		{
			posisi = posisi + 1;
		}
	} 
	}
	
	if (low > high)
	{
	return -1;
	}
}

void updatedata(int i)
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
	printf("\tTAHUN 			: ");
	scanf("%d", &folder[i].date.tahun);
	printf("\t OWNER 			: ");
	scanf("%s", &folder[i].owner);
	printf("\t=======================================");
}

void ubahdata()
{
	int b = 0;
	if(i==0)
	{
		printf("DATA TIDAK DI TEMUKAN MASUKKAN DATA TERLEBIH DAHULU!!!");
	}
	else
	{
		partition(0, i - 1, 1); //Memanggil fungsi partition
		printf("\n\t==========================================");
		printf("\n\tMASUKKAN ID FILE UNTUK MENGUBAH DATA : ");
		scanf("%d", &cariid);
		hasil = intersearch1(cariid, 0, i-1, 1);
		if(hasil==-1)
		{
			printf("\n\tDATA TIDAK DI TEMUKAN");
		}
		else
		{
			updatedata(hasil);
		}
	}
	getch();
	system("cls");
}

void pencariandata()
{
	int pilihan;
	printf("\n\t==========================================");
	printf("\n\t1. CARI BERDASARKAN ID FILE");
	printf("\n\t2. CARI BERDASARKAN TANGGAL");
	printf("\n\t3. CARI BERDASARKAN BULAN");
	printf("\n\t4. CARI BERDASARKAN TAHUN");
	printf("\n\tMASUKKAN PILIHAN URUT YANG DI INGINKAN : ");
	scanf("%d", &pilihan);
	
	if(pilihan==1)
	{
		printf("\n\t==========================================");
		printf("\n\tMASUKKAN ID FILE YANG INGIN DI CARI : ");
		scanf("%d", &cariid);
		partition(0, i-1, 1);		
		hasil = intersearch1(cariid, 0, i-1, 1);
		
		if(hasil==-1)
		{
			printf("\n\tDATA TIDAK DI TEMUKAN");
		}
		else
		{
			printf("\n\t=======================================");
			printf("\n\t=          DATA FILE KE %d            =", hasil+1);
			printf("\n\t=======================================");
			printf("\n\t ID FILE		: %d", folder[hasil].idfile);
			printf("\n\t NAMA FILE		: %s", folder[hasil].namafile);
			printf("\n\t JENIS FILE		: %s", folder[hasil].jns.jenisfile);
			printf("\n\t EKSTENSI FILE		: %s", folder[hasil].jns.ekstensi);
			printf("\n\t TANGGAL		: %d", folder[hasil].date.tanggal);
			printf("\n\t BULAN			: %d", folder[hasil].date.bulan);
			printf("\n\t TAHUN			: %d", folder[hasil].date.tahun);
			printf("\n\t OWNER			: %s", folder[hasil].owner);
			printf("\n\t=======================================");
		}
	}
	else if(pilihan==2)
	{
		printf("\n\t==========================================");
		printf("\n\tMASUKKAN TANGGAL YANG INGIN DI CARI : ");
		scanf("%d", &cariid);
		partition(0, i-1, 6);		
		hasil = intersearch1(cariid, 0, i-1, 2);
		
		if(hasil==-1)
		{
			printf("\n\tDATA TIDAK DI TEMUKAN");
		}
		else
		{
			printf("\n\t=======================================");
			printf("\n\t=          DATA FILE KE %d            =", hasil+1);
			printf("\n\t=======================================");
			printf("\n\t ID FILE		: %d", folder[hasil].idfile);
			printf("\n\t NAMA FILE		: %s", folder[hasil].namafile);
			printf("\n\t JENIS FILE		: %s", folder[hasil].jns.jenisfile);
			printf("\n\t EKSTENSI FILE		: %s", folder[hasil].jns.ekstensi);
			printf("\n\t TANGGAL		: %d", folder[hasil].date.tanggal);
			printf("\n\t BULAN			: %d", folder[hasil].date.bulan);
			printf("\n\t TAHUN			: %d", folder[hasil].date.tahun);
			printf("\n\t OWNER			: %s", folder[hasil].owner);
			printf("\n\t=======================================");
		}
	}
	else if(pilihan==3)
	{
		printf("\n\t==========================================");
		printf("\n\tMASUKKAN BULAN YANG INGIN DI CARI : ");
		scanf("%d", &cariid);
		partition(0, i-1, 7);
		hasil = intersearch1(cariid, 0, i-1, 3);
		
		if(hasil==-1)
		{
			printf("\n\tDATA TIDAK DI TEMUKAN");
		}
		else
		{
			
			printf("\n\t=======================================");
			printf("\n\t=          DATA FILE KE %d            =", hasil+1);
			printf("\n\t=======================================");
			printf("\n\t ID FILE		: %d", folder[hasil].idfile);
			printf("\n\t NAMA FILE		: %s", folder[hasil].namafile);
			printf("\n\t JENIS FILE		: %s", folder[hasil].jns.jenisfile);
			printf("\n\t EKSTENSI FILE		: %s", folder[hasil].jns.ekstensi);
			printf("\n\t TANGGAL		: %d", folder[hasil].date.tanggal);
			printf("\n\t BULAN			: %d", folder[hasil].date.bulan);
			printf("\n\t TAHUN			: %d", folder[hasil].date.tahun);
			printf("\n\t OWNER			: %s", folder[hasil].owner);
			printf("\n\t=======================================");
		}
	}
	else if(pilihan==4)
	{
		printf("\n\t==========================================");
		printf("\n\tMASUKKAN TAHUN YANG INGIN DI CARI : ");
		scanf("%d", &cariid);
		partition(0, i-1, 8);
		hasil = intersearch1(cariid, 0, i-1, 4);
		
		if(hasil==-1)
		{
			printf("\n\tDATA TIDAK DI TEMUKAN");
		}
		else
		{
			
			printf("\n\t=======================================");
			printf("\n\t=          DATA FILE KE %d            =", hasil+1);
			printf("\n\t=======================================");
			printf("\n\t ID FILE		: %d", folder[hasil].idfile);
			printf("\n\t NAMA FILE		: %s", folder[hasil].namafile);
			printf("\n\t JENIS FILE		: %s", folder[hasil].jns.jenisfile);
			printf("\n\t EKSTENSI FILE		: %s", folder[hasil].jns.ekstensi);
			printf("\n\t TANGGAL		: %d", folder[hasil].date.tanggal);
			printf("\n\t BULAN			: %d", folder[hasil].date.bulan);
			printf("\n\t TAHUN			: %d", folder[hasil].date.tahun);
			printf("\n\t OWNER			: %s", folder[hasil].owner);
			printf("\n\t=======================================");
		}
	}
	else
	{
		printf("\n\tDATA TIDAK DI TEMUKAN");
	}
	
	getch();
	system("cls");	
}

void pengurutandata()
{
	int pilihan;
	printf("\n\t=======================================================");
	printf("\n\tURUTKAN DATA BERDASARKAN");
	printf("\n\t1. ID FILE");
	printf("\n\t2. NAMA FILE");
	printf("\n\t3. JENIS FILE");
	printf("\n\t4. EKSISTENSI FILE"); 
	printf("\n\t5. OWNER FILE");
	printf("\n\t6. TANGGAL");
	printf("\n\t7. BULAN");
	printf("\n\t8. TAHUN");
	printf("\n\t=======================================================");
	printf("\n\tMASUKKAN PILIHAN URUTAN YANG DI INGINKAN : ");
	scanf("%d", &pilihan);
	system("cls");
	
	switch(pilihan)
	{
		case 1 :
			partition(0, i-1, 1);
			lihatdata(); break;
		case 2 :
			partition(0, i-1, 2);
			lihatdata(); break;
		case 3 :
			partition(0, i-1, 3);
			lihatdata(); break;
		case 4 :
			partition(0, i-1, 4);
			lihatdata(); break;
		case 5 :
			partition(0, i-1, 5);
			lihatdata(); break;
		case 6 :
			partition(0, i-1, 6);
			lihatdata(); break;
		case 7 :
			partition(0, i-1, 7);
			lihatdata(); break;
		case 8 :
			partition(0, i-1, 8);
			lihatdata(); break;
		default : 
			printf("\n\tMASUKKAN PILIHAN YANG BENAR (1-5)");
			getch();
			system("cls");
			break;
	}
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
