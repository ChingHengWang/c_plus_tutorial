// initialize variables

#include <iostream>
#include <string>
using namespace std;

int main()
{
  //init integer
  int a=5;
  int b(2);
  int result; //undetermined
  a=a+3;
  result=a-b;
  cout<<result<<endl;

  //init String
  string mystring("this is initial string");
  cout<<mystring<<endl;
  mystring="this is different string";
  cout<<mystring<<endl;

  return 0;
}
