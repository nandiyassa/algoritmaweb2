#include <iostream>
using namespace std;

int main(){
  int array[100], i, n;
  float rata, total=0;

  cout << "jumlah peserta ujian = ";cin >> n;

  for(i=0; i<n; i++){
    cout << "Nilai Ujian Yang ke-" << i+1 << " = ";
    cin >> array[i];
    total = total + array[i];
  }

  rata = total/n;
  cout << "Nilai Rata Rata = " << rata << endl;
  cout<<"Nilai Rata Rata Ujian ";
if ( rata <= 50 ){cout<<"Tidak Bagus ";}
		else {cout<<"Bagus";}

	cin.get();
  return 0;

}
