#include <iostream>
#include <conio.h>
using namespace std;

int m, n, i, j, jwb, jwb1, jwb2;
int a[100][100],t[100][100];

main(){
	menu:
	cout<<"Program Transpose Matriks"<<endl<<endl;
	
	cout<<"======================================"<<endl;
	cout<<"Masukkan Baris="; cin>>m;
	cout<<"Masukkan Kolom="; cin>>n;
	cout<<"======================================"<<endl;
	cout<<"Apakah Data Diatas Benar?(0=tidak dan mengisi kembali,1=iya)="; cin>>jwb;
	if(jwb==0){
		system("cls");
		goto menu;
	}
	if(jwb==1){
		system("cls");
	}
	mta:
	cout<<"================================================"<<endl;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<"Masukan Nilai Matriks A ["<<i<<"]["<<j<<"]="; cin>>a[i][j];
		}
	}
	cout<<"================================================"<<endl<<endl;
	
	cout<<"================================================"<<endl;
	cout<<"Matriks A"<<endl;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<" "<<a[i][j]<<" | ";
		}
		cout<<endl;
	}
	cout<<"================================================"<<endl<<endl;
	
	cout<<"Apakah Data Diatas Benar?(0=tidak dan mengisi kembali,1=iya)="; cin>>jwb1;
	if(jwb1==0){
		system("cls");
		goto mta;
	}
	if(jwb1==1){
		system("cls");
	}
	
	cout<<"======================================"<<endl;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
		t[j][i]=a[i][j];
		}
	}
	
	cout<<"Matriks A"<<endl;
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<" "<<a[i][j]<<" | ";
		}
		cout<<endl;
	}
	cout<<"======================================"<<endl<<endl;
	
	cout<<"======================================"<<endl;
	cout<<"Hasil Transpose Matriks A"<<endl;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cout<<" "<<t[i][j]<<" | ";
		}
		cout<<endl;
	}
	cout<<"======================================"<<endl<<endl;
	
	cout<<"Apakah Mau Mengulagi Program?(0=tidak,1=iya)="; cin>>jwb2;
	if(jwb2==1){
		system("cls");
		goto menu;
	}
	if(jwb2==0){
		system("cls");
		cout<<"Terima Kasih :)"<<endl;
		cout<<"Press Any Key To End The Program...."; getch();
	}
}
