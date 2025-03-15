//
// Created by nilesh on 25-02-2025.
//

#include <iostream>

template <typename T>
void swapValues(T &a, T &b){
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
void add(T &a, T &b) {
  T result = a + b;
  std::cout<<"result: "<<result<<std::endl;
}



