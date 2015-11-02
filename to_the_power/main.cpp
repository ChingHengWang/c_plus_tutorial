#include<iostream>
#include<stdlib.h>
using namespace std;


long int power(int a,int power)
{
	long int sum=a;
	for(int i=0;i<power;i++)
	{
	  if (i!=0)
	    sum=sum*a;
	}
	return sum;
}





int main(int argc,char* argv[])
{
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<a<<" power "<<b<<" is "<<power(a,b)<<endl; 	
	return 0;
}







