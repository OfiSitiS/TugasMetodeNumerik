#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int tambah (int A, int B){
	int hasil;
	
    hasil = A + B;
    return (hasil);
}
int kurang (int A, int B){
	int hasil;
	
    hasil = A - B;
    return (hasil);
}
int kali (int A, int B){
	int hasil;
	
    hasil = A * B;
    return (hasil);
}
int pangkat (int A, int B){
	int hasil;
	
	hasil=pow(A,B);
	printf("%d ^ %d= %d", A, B,hasil);
}

void menu(){
	printf("PROGRAM MENGHITUNG A DAN B \n");
	printf(" ");
	printf(" \nMenu Hitungan :\n");
	printf(" 1. Menghitung A + B \n");
	printf(" 2. Menghitung A - B \n");
	printf(" 3. Menghitung A x B \n");
	printf(" 4. Menghitung A ^ B \n");
	printf(" 5. Menghitung deret f(x) = 3x^2 + x - 1 \n");
	printf(" 6. Exit\n");
}

int main () {
	int A, B, i, hasil;
	int pil;
	
			menu:
			menu();
			printf("\nPilih : "); scanf("%d", &pil);
			system("cls");
			switch(pil){
				case 1 	:	printf(" 1. Menghitung A + B \n");
	                        printf("\n");
				            printf(" Masukkan nilai A : "), scanf( "%i", &A);
				 			printf(" Masukkan nilai B : "), scanf( "%i", &B);
						    hasil=tambah (A,B);
                            printf("\n Hasil %d + %d = %d",A,B,hasil);
						    getch();
						    system("cls");
							goto menu;
									    
				case 2 	:	printf(" 2. Menghitung A - B \n");
	                        printf("\n");
				            printf(" Masukkan nilai A : "), scanf( "%i", &A);
				 			printf(" Masukkan nilai B : "), scanf( "%i", &B);
						    hasil=kurang (A,B);
                            printf("\n Hasil %d - %d = %d",A,B,hasil);
						    getch();
						    system("cls");
						    goto menu;
				      	
			   case 3 	:	printf(" 3. Menghitung A x B \n");
	                        printf("\n");
				            printf(" Masukkan nilai A : "), scanf( "%i", &A);
				 			printf(" Masukkan nilai B : "), scanf( "%i", &B);
						    hasil=kali (A,B);
                            printf("\n Hasil %d * %d = %d",A,B,hasil);
						    getch();
						    system("cls");
						    goto menu;  
						    
			  case 4 :	    printf(" 4. Menghitung A ^ B \n");
	                        printf("\n");
				            printf(" Masukkan nilai A : "), scanf( "%i", &A);
				 			printf(" Masukkan nilai B : "), scanf( "%i", &B);
				            printf("\n");
						    hasil=pangkat (A,B);
						    getch();
						    system("cls");
							goto menu;
						   
		   	  case 5 :	    printf(" 5. Menghitung deret f(x) = 3x^2 + x - 1 \n");
	                        printf("\n");
				            printf(" Masukkan nilai A : "), scanf( "%i", &A);
				 			printf(" Masukkan nilai B : "), scanf( "%i", &B);
                            printf("\n");
							for (i=A;i<=B;i++){
						        printf ("\nJika A = %d \n", i);
	                            hasil=((3 * (pow(i,2)) + i - 1));
	                            printf("\n Hasil f(%d)=3(%d)^2 + %d - 1= %d", i, i, i, hasil);
	                            printf("\n");
						    }
						    getch();
						    system("cls");
						    goto menu;
			
			  case 6 :      printf("Anda memilih keluar");
							getch();
							return 0;
							break; 
							default : printf("Menu yang Anda Pilih Tidak Ada");	 	
}
}
