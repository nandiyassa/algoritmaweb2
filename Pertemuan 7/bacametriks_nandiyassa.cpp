#include <iostream>
using namespace std; 
int main()
{
	int matrik[2][2]; 
	int i, j;
	for (i=0; i<2; i++) 
	{
		for(j=0; j<2; j++) 
		{
			cout<<"Matriks "<<i<<","<<j<<" = ";cin>>matrik[i][j];
		}
	}
	cout<<endl;
	cout<<"TAMPILAN MATRIKS"<<endl;
	for (i=0; i<2; i++) 
	{
		for (j=0; j<2; j++) 
		{
			cout<<matrik[i][j]<< " ";
		} 
		cout<<endl;
	}

cin.get();
return 0;
}
