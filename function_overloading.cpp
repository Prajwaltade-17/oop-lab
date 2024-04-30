#include<iostream>
using namespace std;
 class A{
public:
   int area(int l,int b)
{
 cout<<l*b<<"rect\n";
}
int area(int r)
{
const float pi=3.14;
cout<<pi*r*r<<"circle\n";
}
int area(int a,int b,int c)
{
cout<<a*b*c<<"cube\n";

}
};

int main()
{
A obj;
obj.area(2,5);
obj.area(4);
obj.area(2,4,5);
}
