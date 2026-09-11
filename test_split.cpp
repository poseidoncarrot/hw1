/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <iostream>

int main(int argc, char* argv[])
{
  Node* in = new Node (1, new Node (2, new Node (3, new Node (4, nullptr))));
  Node* odds = nullptr;
  Node* evens = nullptr;

  split(in, odds, evens);

  std::cout << "Input is NULL: " << (in == nullptr) << std::endl;
  std::cout << "Odds: " << odds->value << " " << odds->next->value << std::endl;
  std::cout << "Evens: " << evens->value << " " << evens->next->value << std::endl;

  delete odds->next;
  delete odds;
  delete evens->next;
  delete evens;
  
  return 0;
}
