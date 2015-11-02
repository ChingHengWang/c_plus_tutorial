#include<iostream>

using namespace std;

double tick=(double)6.28/51840; //resolution


int radius_to_resolution(double a){
  //a=3.12345678;//3.123457
  std::cout.setf( std::ios::fixed, std:: ios::floatfield ); // floatfield set to fixed
  //resolution 0.0069 degree  
  //all 51840 resolution one tern
  int num=(int)(a/tick);
  //cout<<tick<<endl; 
  return num;
}


int main(){


  for (int i=0;i<=51840;i++){
    double a=0+i*tick;
    int b=radius_to_resolution(a);
    cout<<a<<" "<<b<<endl;
  }
  cout<<tick<<" tick"<<endl;
  double angle=51840*tick;
  cout<<angle<<endl;
  return 0;
}
