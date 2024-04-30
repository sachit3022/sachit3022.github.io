#include "vector.hpp"
#include <random>
#include <initializer_list> 


Table::Table(size_t height, size_t width, int val): width_{width}, height_{height}
{
  //table is std::vector<int> *table_;
  table_ = new std::vector<int>[width_];
  for (size_t i = 0; i < width_; i++)
  {
    table_[i] = std::vector<int>(height_, val);
  }
}

Table::Table(std::initializer_list<std::initializer_list<int>> list)
{
  height_ = list.size();
  width_ = list.begin()->size();
  table_ = new std::vector<int>[width_];
  size_t i = 0;
  for (auto row : list)
  {
    if (row.size() != width_)
    {
      throw std::invalid_argument("Invalid argument");
    }
    table_[i] = std::vector<int>(row);
    i++;
  }
}

// WRITE THE DEFINITION FOR Table::PrintTable
void Table::PrintTable(std::ostream &os) const
{
  for (size_t i = 0; i < height_; i++)
  {
    for (size_t j = 0; j < width_; j++)
    {
      os << table_[i][j] << ", ";
    }
    os << std::endl;
  }
}

bool Table::SetValue(size_t row, size_t col, int val){
  if (col >= width_ || row >= height_)
  {
    return false;
  }
  table_[row][col] = val;
  return true;

}
int Table::GetValue(size_t row, size_t col) const {
  for (size_t i = 0; i < width_; i++)
  {
    for(int & x : table_[i]){
      x = 0;
    }
  }
  return table_[row][col];
}