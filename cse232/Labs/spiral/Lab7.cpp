#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <tuple>

std::string Two_D_Vector_To_String(std::vector< std::vector<char> > vec){
  std::stringstream os;
  for(int i = 0; i < static_cast<int>(vec.size()); i++){
    for(int j = 0; j < static_cast<int>(vec.at(i).size()); j++){
      os << vec.at(i).at(j) << " ";
    }
    os << "\n";
  }
  return os.str();
}

std::vector<std::vector<char> > Counting_Spiral(int length){
  std::vector<std::vector<char> > v(length,std::vector<char> (length, '0'));
  int i = length/2;
  int j = length/2+1;
  int move_i = -1;
  int move_j =0;
  int count=1;

  while(count < length*length){
    
    v.at(i).at(j) = '0' + (count%10);
    i+=move_i;
    j+=move_j;
    count+=1;
    
    if((i -length/2)<0 && (j -length/2)<0 &&  (i==j)){
      move_i = 1;
      move_j = 0;
    }
    else if((i -length/2)<0 && (j -length/2)>0 &&  i+j == length-1){
      move_i = 0;
      move_j = -1;
    }
    else if((i -length/2)>0 && (j -length/2)<0 &&  i+j == length-1){
      move_i = 0;
      move_j = 1;
    }
    else if((i -length/2+1)>0 && (j -length/2)>0 &&  j==i+1){
      move_i = -1;
      move_j = 0;
    }

  }
  
  return v;

}


std::tuple<int, int> turn_left(int i, int j){
  if (j == 0){
    return {j,i};
  }else{
    return {-j,i};
  }
}

std::vector<std::vector<char> > Counting_Spiral_Mod(int length){
  std::vector<std::vector<char> > v(length,std::vector<char> (length, '0'));
  int i = length/2;
  int j = length/2+1;
  int move_i = -1;
  int move_j =0;
  int count=1;
  int step =1;
  int round =2;

  while(count < length*length){
    
    v.at(i).at(j) = '0' + (count%10);
    std::cout << i << " " << j << std::endl;
    i+=move_i;
    j+=move_j;
    count+=1;
    step +=1;
    if (step / round  == 4){
      step = 0;
      round +=2;
    }
    else if (step ==round){
      std::tie(move_i,move_j) = turn_left(move_i,move_j);
      step = 0;
    }
  }
  return v;
}


int main(){
  //std::vector<std::vector<char> > v = Counting_Spiral(5);
  std::vector<std::vector<char> > v = Counting_Spiral_Mod(5);
  std::cout << Two_D_Vector_To_String(v);
  return 0;
}