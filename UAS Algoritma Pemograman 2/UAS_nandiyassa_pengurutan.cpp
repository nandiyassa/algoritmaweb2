#include <iostream> 
using namespace std;

const int nmaks = 100; 
typedef int larikint[nmaks+1];

void bacalarik(larikint l, int n);
void cetaklarik(larikint l, int n);
void pengurutan(larikint l, int n);
void bacalarik(larikint l, int n)
	{
		int i;
		for (i=1; i<=n; i++)
		{
			cout<<"   Nilai : "; cin>>l[i];
		}
	}

void cetaklarik(larikint l, int n)
	{
		int i;
		for (i=1; i<=n; i++)
		{
			cout<<"  " << l[i];
		}
	}

void pengurutan(larikint l, int n)
	{ 
		int i, j, imin, temp;
		for (i=1; i<=n; i++)
		{
			imin = i;
			for(j=i+1; j<=n; j++) 
			if (l[j] < l [imin]) 
			imin = j;
			
			temp = l [imin]; 
			l[imin] = l[i]; 
			l[i] = temp;
		}
	}

int main() 
	{
		larikint l;
		int n;	
		cout<<"   UAS ALGORITMA DAN PEM0GRAMAN 2"<<endl;
		cout<<"   ALGORITMA PENGURUTAN BUBLE SORT"<<endl;	
		cout<<"   Masukan banyak element : ";cin>>n; 
		cout<<"   Masukan nilai : "<<endl;	
		bacalarik(l,n);	
		pengurutan(l,n);	
		
		cout<<"   Hasil pengurutan buble sort sebagai berikut : "<<endl; 
		cetaklarik(l,n);	
		
		cin.get();	return 0;
	}
