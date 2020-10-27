#include <iostream>
using namespace std;


int main() {
	int array[100], i,n,k,e,t,u,s;
 	 float nilai, total=0; 
	string nama, nim;
	
	cout << "PERHITUNGAN NILAI MAHASISWA"<< endl;
	cout << "STMIK INSAN PEMBANGUNAN TELUKNAGA "<< endl;
  	cout << "Masukkan Jumlah Mahasiswa = ";cin >> n;
	
	for(i=1; i<=n; i++){
		cout << "Mahasiswa ke - "<<i<<endl;
		cout << "Masukan Nama = " ;cin>>nama;
    	cout << "Masukan NIM = " ;cin>>nim;
    	cout << "Masukan Nilai Kehadiran  = ";cin>>k;  
    	cout << "Masukan Nilai Etika  = ";cin>>e; 
    	cout << "Masukan Nilai Tugas  = ";cin>>t;  
    	cout << "Masukan Nilai UTS  = ";cin>>u;  
   	 	cout << "Masukan Nilai UAS  = ";cin>>s;  
			total =  (k*0.15) + (e*0.1) + (t*0.2) + (u*0.25) + (s*0.30) ;
			nilai = total;
			cout << "Nilai Akhir = " << nilai << endl;
			cout<<"Grade ";
			if (nilai >= 81 ) {printf("A \n"); }
			else if (nilai >= 68 && nilai < 80) {printf("B \n");}
			else if (nilai >= 55 && nilai < 67) {printf("C \n");}
			else if (nilai >= 30 && nilai < 54) {printf("D \n");}
			else if (nilai < 29) {printf("E \n");}
	}	


cout<<"HASIL PERHITUNGAN NILAI MAHASISWA"<<endl;
cout<<" No "<<" Nama "<<" NIM "<<" Nilai Akhir "<<" Grade "<<endl;
cout<<" 1 "<<" nandi "<<" 212 "<<"     85      "<<"   A   "<<endl;
cout<<" 2 "<<" sandi "<<" 213 "<<"    59.5     "<<"   C   "<<endl;

cin.get();
return 0;
}
