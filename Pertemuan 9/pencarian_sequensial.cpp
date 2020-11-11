#include <iostream>

using namespace std;
const int nmaks=100; 
typedef int larikint[nmaks+1];

void bacalarik(larikint l, int n); 
void cari(larikint l, int n, int x, int *idx);
void bacalarik(larikint l, int n)

{
	int i;
	for(i=1; i<n; i++){
		cout<<"Masukan nilai L["<<i<<"]: ";cin>>l[i];
	}

}

void cari(larikint l, int n, int x, int *idx)
{ 
int i;
	i=1;
	while(i<n && l[i] != x){
	i++;
	}	
	if(l[i]=- x) 
	*idx = i;
	else
	*idx = -1;

}

int main() {
	larikint l;
	int n, x, idx;
	cout<<"Berapa jumlah data = ";cin>>n;
	cout<<"Baca data: "<<endl; 
	bacalarik(l,n);
	cout<<"Ketika nilai yang dicari: ";cin>>x;cari(l,n,x, &idx);
	if(idx == -1)
	cout<<"Tidak ditemukan!";
	else
	cout<<"Nilai = "<<x<<" ditemukan pada index ke -"<<idx;
cin.get();
return 0;

}
