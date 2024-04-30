#include <vector>
#include <iostream>
#include <string>
#include <sstream>


std::string Two_D_Vector_To_String(std::vector<std::vector<int> > vec){
  std::stringstream os;
  for(int i = 0; i < static_cast<int>(vec.size()); i++){
    for(int j = 0; j < static_cast<int>(vec.at(i).size()); j++){
      os << vec.at(i).at(j) << " ";
    }
    os << "\n";
  }
  return os.str();
}


bool hit_wall(int pos_x, int pos_y, int dir_x, int dir_y, std::vector< std::vector <int> > & spiral, int lenght){
  // whats the logic?
  pos_x += dir_x; // 0-4
  pos_y +=dir_y; // 0-4
  if(pos_x <0 || pos_y <0 || pos_x >4 || pos_y > 4 || spiral.at(pos_x).at(pos_y) !=0 ){
    return true;
  }else{
    return false;
  }
}

void turn_right(int& u ,int& v){
  // 0,-1
  // -1,0
  // 0,1
  // 1,0
  if (u==0 && v ==-1){
    u = -1;
    v = 0;
  }
  else if (u==-1 && v ==0){
    u = 0;
    v = 1;
  }
  else if (u==0 && v ==1){
    u = 1;
    v = 0;
  }
  else{
    u =0;
    v = -1;
  }

}



std::vector<std::vector <int> > Counting_Spiral(int length){
  std::vector<std::vector<int> > spiral(length, std::vector<int>(length, 0) );
  int pos_x = length -1;
  int pos_y = length -1;
  int dir_x = 0;
  int dir_y = -1;
  int count = length*length -1;

  while(count){
    spiral.at(pos_x).at(pos_y) = count;
    pos_x += dir_x;
    pos_y += dir_y;
    count--;

    if(hit_wall(pos_x,pos_y,dir_x,dir_y,spiral,length)){
      turn_right(dir_x,dir_y);
      std::cout << dir_x << " " << dir_y << std::endl;
    }
    
  }
  
  return spiral;
}

int main(){

  std::vector<std::vector<int> > vec = Counting_Spiral(5);
  std::cout << Two_D_Vector_To_String(vec);
}

