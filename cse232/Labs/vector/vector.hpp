#pragma once
#include <iostream>
#include <vector> 
#include "vector.hpp"


// A Table of integer values.
class Table {
 private:
    std::vector<int> *table_;
    size_t width_; 
    size_t height_;             
 public:
  
  Table(size_t height, size_t width_, int val = 0); 
  Table(std::initializer_list<std::initializer_list<int>> list);
  
  Table(const Table& other) = delete;
  Table& operator=(const Table& other);
  ~Table() {  delete [] table_; }

  void PrintTable(std::ostream &) const;
  bool SetValue(size_t row, size_t col, int val);
  int GetValue(size_t row, size_t col) const;
};
