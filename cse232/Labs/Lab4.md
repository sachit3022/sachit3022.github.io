
```cpp

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

std::int64_t LocToDec(std::string const & loc){
  long int dec =0;
  for(std::string::size_type i = 0; i < loc.size(); ++i){
    dec += pow(2,loc[i] - 97);
  }
  return dec;
}

std::string DecToLoc(std::int64_t dec){
  std::string loc;
  int loop_count =0;
  while(dec !=0){
    int rem = dec % 2;
    dec = (dec - rem) / 2;
    if(rem>0){
      loc += (char)(loop_count+97);
    }
    loop_count +=1; 
  }
  return loc;
}
std::string Abbreviate(std::string const & loc)
{
  return DecToLoc(LocToDec(loc));

}
std::int64_t AddLoc(std::string const & loc1, std::string const & loc2)
{
  return LocToDec(loc1+loc2);
}

int main()
{

  string loc, string1,string2;
  long int dec;

  cout << "Give me a location string:";  
  cin >> loc;
  cout << "Give me an integer:";
  cin >> dec ;
  sort(loc.begin(), loc.end());
  cout << loc << " to dec: " << LocToDec(loc) << endl;
  cout << dec << " to loc: " << DecToLoc(dec) << endl;
  cout << "Give me two more location strings:";
  cin >> string1;
  cin >> string2;

}
```

