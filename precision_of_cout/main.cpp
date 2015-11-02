// modify precision
#include <iostream>     // std::cout, std::ios

int main () {
  double f = 213.141591234567890;
//<S-F12><S-F10>  std::cout.unsetf ( std::ios::floatfield );                // floatfield not set
  std::cout.precision(5);
  std::cout << f << '\n';
  std::cout.precision(10);
  std::cout << f << '\n';
  std::cout.setf( std::ios::showbase, std:: ios::floatfield ); // floatfield set to fixed
  std::cout << f << '\n';
  std::cout<<sizeof(f)<<std::endl;
  return 0;
}
