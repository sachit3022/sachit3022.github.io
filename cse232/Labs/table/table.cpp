#include "table.hpp"
#include <random>

Table::Table(size_t width, size_t height, int val): width_(width), height_(height), table_(height, row_t(width, val)){};

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

void Table::FillRandom(int low, int high, int seed)
{
  std::mt19937 mt(seed);
  std::uniform_int_distribution<int> dist(low, high);
  for (size_t i = 0; i < height_; i++)
  {
    for (size_t j = 0; j < width_; j++)
    {
      table_[i][j] = dist(mt);
    }
  }
}
// WRITE THE DEFINITION FOR Table::FillRandom
bool Table::SetValue(size_t col, size_t row, int val){
  if (col >= width_ || row >= height_)
  {
    return false;
  }
  table_[row][col] = val;
  return true;

}
int Table::GetValue(size_t col, size_t row) const
{
  if (col >= width_ || row >= height_)
  {
    throw std::out_of_range("Out of range");
  }
  return table_[row][col];

}