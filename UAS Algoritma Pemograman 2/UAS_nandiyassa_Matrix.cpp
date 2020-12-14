#include<iostream>
#include<iomanip>
using namespace std;
main()
{
cout<<endl;
	cout<<"  UAS ALGORITMA DAN PEM0GRAMAN 2"<<endl;

int a[3][3],b[3][3],c[3][3],i,j,k;

cout<<"  PROGRAM MATRIKS DETERMINAN"<<endl<<endl;
cout<<"  Input Nilai : "<<endl;

for(i=0;i<3;i++){
for(j=0;j<3;j++){

cout<<"  Baris "<<(i+1)<<" & Kolom "<<(j+1)<<" = ";

cin>>a[i][j];}
cout<<endl;}

cout<<"  Matriks Ordo 3X3 = "<<endl<<endl;

for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<setw(10)<<a[i][j];}
cout<<endl<<endl;}
cin.get();	return 0;
}
