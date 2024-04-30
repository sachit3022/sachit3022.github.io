The objective of the lab is to find the area of the polynomial function.
THe concepts that we use here is exponential search algorithm, To motivate you further, this is not some mathematical problem, we can this is applied to real life cases.
Suppose MSU wants to install routers in one of the halls, If you install one router, there will be lot of complaints, if 2 routers complaints decreases but if you do routers more than students it will be of no use wasting money, So MSU needs to decide optimal amount of routers given complaints < 5.
Same applies to the number of items on menu at the dining halls. you get the idea by now.

Major problems I see is you are struggling with the syntax and logic. We will focus one at a time. If you are comfortable in python write the code in python ( less worry about sytax) and then I will help you write cpp or you can figure out on your own.

Revise last lab, We have covered recrsion, loops and lab before that we covered input output, datatypes and precision. In this lab we will learn about functions.

Lets get back to our initial problem.
We will start with simple functions, 



The solution of the problem is given below. 
```cpp
#include <iostream>
#include <math.h>
#include <iomanip> 

// YOUR FUNCTIONS GO HERE
double Fn(double x){
  return -6*pow(x,2) +5*x +3;
}
double Integral(double x){
  return -2*pow(x,3) +5*pow(x,2)/2 +3*x;
}

double EstimateWithTraps(double a, double b, int n){
  double dx = (b - a)/n;
  double area_dx =0;
  double x =a;
  for(int i=0;i<n;i++){
    area_dx += dx*(std::abs(Fn(x)) + std::abs(Fn(x+dx)))/2;
    x +=dx;
  }
  return area_dx;
}

// Trapezoid calculation method...
int main()
{
  double a,b,tolerance,estimated_area,acutal_area,curr_tolerance;
  int n;
  std::cout <<"Lower Range:" <<std::endl;
  std::cin >> a;
  std::cout <<"Upper Range:" <<std::endl;
  std::cin >> b;
  std::cout <<"Tolerance:" <<std::endl;
  std::cin >> tolerance;
  std::cout <<"Initial trapezoid count:" <<std::endl;
  std::cin >> n;
  curr_tolerance = tolerance +1;
  while(curr_tolerance>tolerance){
    estimated_area = EstimateWithTraps(a,b,n);
    acutal_area = std::abs(Integral(b)) - std::abs(Integral(a));
    curr_tolerance = std::abs(estimated_area- acutal_area);
    std::cout << "Estimate:"<< std::fixed << std::setprecision(4) <<estimated_area << ", Number of Traps:"<<n<<", Diff:"<<curr_tolerance<<std::endl;
    n = n*2;
  }
  return 0;

}
```