#include <iostream> 
using namespace std;

void naikturun(int &naik, int &turun, int nilai, int jumlah){
	naik = nilai + jumlah;
	turun = nilai - jumlah;
}
int main() {
	int hasilnaik=0, hasilturun=0, nilai=10;
	naikturun(hasilnaik, hasilturun, nilai, 3); 
	cout<<"hasilNaik = "<<hasilnaik<<endl;
	cout<<"hasilTurun = "<<hasilturun<<endl;

cin.get();
return 0; }
