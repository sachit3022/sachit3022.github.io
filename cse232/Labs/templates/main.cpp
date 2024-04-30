#include "matrix.hpp"



int main() {


  Matrix<int> m1(4, 4, 7);
  Matrix<int> m2(4, 4, 4);
  Matrix<int> m3 = m1 + m2;
  m2[0][2] = 8;
  Matrix<int> m4 = m1 + m2;
m4.Write(std::cout);
  Matrix<int> m5(1,1);

  Matrix<int> m6 = m1+m5;
  Matrix<int> m7 = m1*2;
  std::cout << m6.GetHeight() << std::endl;

    return 0;
}