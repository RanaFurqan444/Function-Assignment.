#include <iostream>
using namespace std;
void function1()
{
  int a;
  cin>>a;
  if(a%2 == 0)
    {
     cout<<"Even Number";
    }
	else
	{
	 cout<<"Odd Number";
	}
}
void function2(int b)
{
	if(b%2==0)
	{
	 cout<<"Even Number\n";
	}
	else
	{
	 cout<<"Odd Number\n";
	}
}
string function3()
{
 int c;
 cout<<"\n";
 cin>>c;
 if(c%2 == 0)
    {
     string e = "Even Number\n";
     return e;
    }
	else
	{
	 return "Odd Number\n";
	}
}
string function4(int d)
{
	if(d%2 == 0)
	{
	 string b="Even Number";
	 return b;
	}
	else
	{
	 return "Odd Number";
	}
}
int main ()
{
 int a;
 cin>>a;
 function2(a);
 function1();
 cout<<function3();
 int d;
 cin>>d;
 cout<<function4(d);
 return 0;
}
