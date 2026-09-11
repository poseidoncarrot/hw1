#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "ulliststr.h"

//Use this file to test your ulliststr implementation before running the test suite

int main(int argc, char* argv[])
{
  ULListStr list;

  list.push_back("2");
  list.push_front("1");
  list.push_back("3");

  std::cout << "Front: " << list.front() << std::endl;
  std::cout << "Back: " << list.back() << std::endl;
  std::cout << "Size: " << list.size() << std::endl;

  std::cout << list.get(0) << " " << list.get(1) << " " << list.get(2) << std::endl;

  list.pop_front();
  list.pop_back();

  std::cout << "Remaining: " << list.front() << std::endl;
  return 0;
}
