#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


	int h,w,b,d,q,c,e,r,t,u,p;
	cout<<"							For Hostal Boys"<<endl;
	cout<<"							Total boys = ";
	cin>>p;
	cout<<"Enter Hostal rent of month = ";
	cin>>h;
	cout<<endl;
	w=h/p;
	cout<<"Enter Breakfast expense of per day = ";
	cin>>b;
	cout<<endl;
	cout<<"Enter Dinner expense of per day = ";
	cin>>d;
	cout<<endl;
	cout<<"Enter Chai expense of per day (One time) = ";
	cin>>c;
	cout<<endl;
	q=c*2;
	e=b+d+q;
	r=e*30;
	t=r/p;
	u=t+w;
	cout<<"Per head amount = "<<u<<endl;
	
	return 0;
}
