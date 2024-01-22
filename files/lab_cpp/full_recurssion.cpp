// count digits
#include <iostream>
#include <iomanip>
#include <stdio.h>


int convert_to_digits(int& number){
    int sum = 0;
    for(int number; number > 0; number /= 10){
        sum += number % 10;
    }
    return sum;
}


int main(){

    int number;
    std::cin >> number; //max 10 digits 2147483647
    
    // how to add all digits in a number
    while(number > 9){
        number = convert_to_digits(number);
    }
    // this is gaurentted to acheive the result in 3 iterations because of max integer size
    std::cout << number << std::endl;
}
