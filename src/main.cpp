#include <iostream>

int main(){
  std::cout << "Ships battle" << std::endl;
  bool tiny[] = {true};
  bool small[] = {true, true};
  bool medium[] = {true, true, true};
  bool large[] = {true, true, true, true};

  std::cout << "size tiny " << sizeof(tiny) << std::endl;
  std::cout << "size small " << sizeof(small) << std::endl;
  std::cout << "size medium " << sizeof(medium) << std::endl;
  std::cout << "size large " << sizeof(large) << std::endl;

  return 0;
}