// count digits
#include <iostream>
#include <iomanip>
#include <stdio.h>



int main(){

    int number;
    std::cin >> number; //max 10 digits 2147483647
    
    // how to add all digits in a number
    int sum = 0;
    for(int number; number > 0; number /= 10){
        sum += number % 10;
    }
    number  = sum; 
    sum =0;
    for(int number; number > 0; number /= 10){
        sum += number % 10;
    }
    number  = sum;
    sum =0;
    for(int number; number > 0; number /= 10){
        sum += number % 10;
    }
    // this is gaurentted to acheive the result in 3 iterations because of max integer size
    std::cout << number << std::endl;
}
