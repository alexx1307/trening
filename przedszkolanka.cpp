#include <iostream>
using namespace std;

int main () 
{	
	int a, b, n;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		int a0=a, b0=b;
		while(a!=b) 
		{ 	
			if (a<b) a+=a0;
			else b+=b0;
		}
		cout<<a<<endl;
	
	}
	
	
	
	return 0;
}
