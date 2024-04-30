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




class Dir{
    public:
    int dir_x;
    int dir_y;
    Dir(int t_dir_x,int t_dir_y): dir_x{t_dir_x}, dir_y{t_dir_y}{};
};

class Pos{
  private:
    int _x;  
    int _y;
  public:
    int get_x()const {
      return _x;
    }
    int get_y() const{
      return _y;
    }
    void update(Dir& dir){
      _x+=dir.dir_x;
      _y+=dir.dir_y;
    }
    Pos(int x, int y): _x{x}, _y{y}{};
};

bool hit_wall(Pos &p, Dir& d, std::vector< std::vector <int> > & spiral){

  int pos_x = p.get_x() + d.dir_x; // 0-4
  int pos_y  =p.get_y() + d.dir_y;
  int length = static_cast<int>(spiral.size());
  if(pos_x <0 || pos_y <0 || pos_x > length-1 || pos_y > length-1 || spiral.at(pos_x).at(pos_y) !=0 ){
    return true;
  }else{
    return false;
  }
}


void turn_right(Dir& d){
    int temp = d.dir_x;
    d.dir_x = d.dir_y;
    d.dir_y = -temp;

}

std::vector<std::vector <int> > Counting_Spiral(int length){
  std::vector<std::vector<int> > spiral(length, std::vector<int>(length, 0) );
  Pos p{length-1,length-1};
  Dir d{0,-1};
  int count = length*length -1;

  while(count){
    spiral.at(p.get_x()).at(p.get_y()) = count;
    p.update(d);
    count--;
    if(hit_wall(p,d,spiral)){
       
      turn_right(d);
    }
  }
    
  
  return spiral;

}

int main(){

  std::vector<std::vector<int> > vec = Counting_Spiral(5);
  std::cout << Two_D_Vector_To_String(vec);
}

