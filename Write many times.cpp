#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>
using namespace std;
int main()
{
	int n,a;
	string v;
	cout<<"                                 Here you can write the same thing many times"<<endl;
	
	cout<<"\nWrite anything that you want to write = ";
	getline(cin,v);
	
	cout<<"\nHow many times you want to write = ";
	cin>>n;
	cout<<"\n";
	int i;
	for(i=1;i<=n;i++)
	{
		cout<<v<<endl;	
		}	
	cout<<"\nCopy your text and Enjoy!";
	cin>>a;
	
	return 0;
}
