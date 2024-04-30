#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>


using namespace std;

int BinaryToInt2(const std::string &binary_str) {
  return std::accumulate(binary_str.begin(), binary_str.end(), 0, 
    [](int sum, char c) { return sum * 2 + (c == '1' ? 1 : 0); });
}

void PassOrFail(std::vector<std::pair<std::string, int>> &v) {
  std::sort(v.begin(), v.end(),
    [](const std::pair<std::string, int> & in1, const std::pair<std::string, int> & in2){
      return static_cast<char>(in1.second >= 600) + in1.first  >  static_cast<char>(in2.second >= 600) + in2.first;
    }
  );
}


int main(){

    std::vector<std::pair<std::string, int>> v = {{"Alice", 500}, {"Bob", 700}, {"Charlie", 600}, {"David", 800}};
    PassOrFail(v);
    for (const auto & p : v) {
        std::cout << p.first << " " << p.second << std::endl;
    }
    return 0;
}







