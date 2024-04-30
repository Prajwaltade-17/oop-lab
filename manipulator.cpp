
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int N;
    float M;
    
	cout<<"enter num:"<<endl;
	cin>>N;
	cout<<"enter the float num"<<endl;
	cin>>M;
	cout<<"hex num:"<<setw(10)<<"dec num:"<<setw(10)<<"oct num:"<<setw(10)<<"float num:"<<endl;
	cout<<hex<<N<<setw(10)<<setfill('*')<<dec<<N<<setw(10)<<setfill('*')<<oct<<N<<setw(10)<<setfill('*')<<setprecision
	(4)<<M<<endl;
		cout<<"flag:"<<dec<<N<<endl;
	return 0;
}

