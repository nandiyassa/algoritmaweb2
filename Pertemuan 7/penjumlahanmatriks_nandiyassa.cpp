#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main() {
	int mta[2][2];
	int mtb[2][2];
	int mtc[2][2];
	int i, j;
	for(i=0; i<2; i++)	{
		for(j=0; j<2; j++){
			cout<<"Data Matriks A ["<<i<<"] ["<<j<<"] : ";cin>>mta[i][j];
		}
	}
	cout<<endl;
	for(i=0; i<2; i++){ 
		for(j=0; j<2; j++){
			cout<<"Data Matriks B ["<<i<<"] ["<<j<<"] : ";cin>>mtb[i][j];
		}
	} 
	cout<<endl;
	cout<<"Matriks A + Matriks B : "<<endl;
	for (i=0; i<2; i++)	{
		for(j=0; j<2; j++){
		mtc[i][j] = mta[i][j] + mtb[i][j]; cout<<setw(3)<<mtc[i][j];
		}
		cout<<endl;
	}
	
cin.get(); 
return 0;
}
