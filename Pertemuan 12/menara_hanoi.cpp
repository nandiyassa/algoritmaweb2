#include <iostream>
using namespace std;

int fak(int n) 
{
	if(n == 0)
		return 1;
	else
		return n * fak(n-1);

}

void hanoi(int n, char a, char b, char c)
{
	if(n==1)
	cout<<"Pidahkan piringan dari "<<a<<" ke "<<b<<endl;
	else
	{
		hanoi(n-1,a,c,b);
		cout<<"Pidahkan piringan dari "<<a<<" ke "<<b<<endl; 
		hanoi(n-1,c,b,a);
	}
}

int main() 
{
	int jum_piring;
	cout<<"Teknik Hanoi Memindahkan Piring"<<endl; 
	cout<<"Masukkan Jumlah Piring = ";cin>>jum_piring; 
	hanoi (jum_piring, 'A', 'B', 'C');
	cin.get();
	return 0;
}
