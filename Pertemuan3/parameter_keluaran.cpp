#include <iostream>
using namespace std;

void hitungluas(int a, int t, int *l){
	*l = 0.5 * a * t;
}

int main(){
	int i,n,a,t,l;
	cout<<"Banyaknya Segitiga = ";cin>>n;
	for(i=1; i<=n; i++){
		cout<<"Segitiga yang ke- "<<i<<endl;
		cout<<"Panjang Alas Segitiga = ";cin>>a; 
		cout<<"Tinggi Segitiga = ";cin>>t;
		hitungluas(a,t, &l); 
		cout<<"Luas Segitiga = "<<l<<endl;
}
cin.get();
return 0;
}
