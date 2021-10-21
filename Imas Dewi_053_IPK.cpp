//Program Menghitung IPK

#include <iostream>
#include<conio.h>
using namespace std;

main(){
	int n, i=1;
	float nilai,rata,jml=0;
	
	cout<<"Berapa Banyak Semester="; cin>>n;
	while(i<=n){
		cout<<"Masukkan Indeks Prestasi Semester ke "<<i<<" (0=E 1=D 2=C 3=B 4=A)="; cin>>nilai;
		jml=jml+nilai;
		rata=jml/n;
		i++;
	}
	cout<<"\nIndeks Pestasi Kumulatif (IPK)="<<rata;
	getch();
}

