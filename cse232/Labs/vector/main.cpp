#include <exception>
#include <iostream>
#include "vector.hpp"

Table& Table::operator=(const Table& v1)
{
  for (size_t i = 0; i < v1.width_; i++)
  {
    this->table_[i] = v1.table_[i];
  }
  return *this;
}

int main() {
  Table v1(2,2);
  //Table v2 = v1; 
  Table v3{{1,2,3,4,5}, {6,7,8,9,10}}  ;
  v3 = v1;
  v1.PrintTable(std::cout);
  //v2.PrintTable(std::cout);
  v3.PrintTable(std::cout);
  std::cout << v1.GetValue(1,2) << std::endl;

  //v2.SetValue(3, 10); // v2 and v1 are different objects
  //Table v3 = v1 + {1,2,3,4,5}; //what are the different 
}
