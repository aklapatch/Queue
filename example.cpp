//example.cpp
//example usage of this queue class

#include "Queue.hpp"
#include <iostream>

int main(){
    Queue<int> test;

    const int INPUT = 5;
    test.push(INPUT);

    std::cout << "Input=" << INPUT << "\nOutput=" << test.pop() << "\n";

    return 0;
}