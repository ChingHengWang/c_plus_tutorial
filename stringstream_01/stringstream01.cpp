

#include<sstream>
#include<iostream>



int main()

{

	double a=1.9;
	std::stringstream ss;
	ss<<a<<"  hi!!";	
	std::cout<<ss.str()<<std::endl;

	return 0;
}
