#include <vector>
#include <iostream>
#include <string>
#include <sstream>


std::string Two_D_Vector_To_String(std::vector<std::vector<char>> vec){
  std::stringstream os;
  for(int i = 0; i < static_cast<int>(vec.size()); i++){
    for(int j = 0; j < static_cast<int>(vec.at(i).size()); j++){
      os << vec.at(i).at(j) << " ";
    }
    os << "\n";
  }
  return os.str();
}

void move(int &pos_x,int &pos_y,int dir){
  //0 -> (1,0) 1-> (0,-1), 2 -> (-1,0) 3->(0,1)
  
  int dir_y = (dir%2 -1) * (-1 + 2*(dir==2));
  int dir_x = (dir%2) * (-1 + 2*(dir==3));
  pos_x += dir_x;
  pos_y += dir_y;
}

void change_dir(int &dir){
  dir = (dir+1)%4; // slight change because of the way the directions are defined
}

std::vector<std::vector <char> > Counting_Spiral(int length){
  std::vector<std::vector<char> > spiral(length, std::vector<char>(length, 'x'));
  int pos_x = length/2;
  int pos_y = length /2 ;
  int dir = 0;
  int count = 0;
  int curr_movement = 0;
  int move_length = 0;
  int movement =0;
  
  while(count < length*length -1 ){
  spiral.at(pos_x).at(pos_y) = static_cast<char>( count%10 +48);
  move(pos_x,pos_y,dir);
  count++;
  if(curr_movement == move_length){
    change_dir(dir);
    movement++;
    curr_movement =0;
  }else{
    curr_movement++;
  }
  if(movement !=0 && movement%2==0){ // movement ==0 means we are at the start of the spiral but it is divisable by 2 we need to exclude it
    move_length++;
    movement = 0;
  }
  }
  spiral.at(pos_x).at(pos_y) = static_cast<char>( count%10 +48);
  return spiral;
}

int main(){

  std::vector<std::vector<char> > vec = Counting_Spiral(5);
  std::cout << Two_D_Vector_To_String(vec);
}

