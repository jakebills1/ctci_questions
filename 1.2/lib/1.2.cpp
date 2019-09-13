// implement an algorithm to determine if two strings are permutations of each other
/*
 * method:
 *  1. in the StringAnalyzer class, write a method that takes two strings and returns true if those strings are permutations of each other/ contain only the same letters
 *    a. iterate over string 1, increment the corresponding index in table
 *    b. iterate over string 2, decrement the corresponding index in table
 *    c. if all elements in table are 0, return true
 *    d. else, return false
 */
#include <iostream>
#include "stringanalyzer.h"
using namespace std;
int main()
{
  StringAnalyzer myStringAnalyzer;
  bool result1 = myStringAnalyzer.isPermutation("toast", "saott");
  bool result2 = myStringAnalyzer.isPermutation("apple", "racecar");
  cout << boolalpha << "Result 1 is: " << result1 << "\nResult 2 is: " << result2 << endl;
}
