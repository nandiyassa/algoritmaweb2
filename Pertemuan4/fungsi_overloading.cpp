#include <iostream> 
using namespace std;

void cetak(double x){
	cout<<"Hasil double x = "<<x<<endl;}
void cetak(string x){
	cout<<"Hasil string x = "<<x<<endl;}

int main() {

cetak(3.5);
cetak("pemograman");
cetak(6);
cetak("semangat");

cin.get();
return 0;}
