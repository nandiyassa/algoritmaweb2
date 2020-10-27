#include <iostream>
#include <iomanip>
using namespace std;

main()
{
char nama[20][30],grade[20];
int i,j,tgs[20],uts[20],uas[20],akhir[20],nim[20],kehadiran[20],etika[20];

cout<<" PERHITUNGAN NILAI MAHASISWA "<<endl;
cout<<" STMIK INSAN PEMBANGUNAN TELUKNAGA"<<endl<<endl;
cout<<" Masukan Jumlah Mahasiswa : ";cin>>j;
cout<<endl;

for(i=1;i<=j;i++)
{
	cout<<" Mahasiswa Ke - "<<i<<endl;
	cout<<" Masukan Nama : ";cin>>(nama[i]);
	cout<<" Masukan NIM : ";cin>>nim[i];
	cout<<" Masukan Nilai Kehadiran : ";cin>>kehadiran[i];
	cout<<" Masukan Nilai Etika : ";cin>>etika[i];
	cout<<" Masukan Nilai Tugas : ";cin>>tgs[i];
	cout<<" Masukan Nilai UTS : ";cin>>uts[i];
	cout<<" Masukan Nilai UAS : ";cin>>uas[i];
	
	akhir[i]=(kehadiran[i]*0.15)+(etika[i]*0.1)+(tgs[i]*0.2)+(uts[i]*0.25)+(uas[i]*0.3);
	if(akhir[i]>=81)
	grade[i]='A';
	else if(akhir[i]>=68&&akhir[i]<80)
	grade[i]='B';
	else if(akhir[i]>=55&&akhir[i]<67)
	grade[i]='C';
	else if(akhir[i]>=30&&akhir[i]<54)
	grade[i]='D';
	else
	grade[i]='E';
	cout<<endl;
}

cout<<" HASIL PERHITUNGAN NILAI MAHASISWA "<<endl;
cout<<"No.  Nama          NIM   Nilai Akhir   Grade"<<endl;
for(i=1;i<=j;i++)
{
	cout<<setiosflags(ios::left)<<setw(5)<<i;
	cout<<setiosflags(ios::left)<<setw(15)<<nama[i];
	cout<<setiosflags(ios::left)<<setw(10)<<nim[i];
	cout<<setiosflags(ios::left)<<setw(10)<<akhir[i];
	cout<<setiosflags(ios::left)<<setw(12)<<grade[i]<<endl;
}
cin.get();
return 0;
}
