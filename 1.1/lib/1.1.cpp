// implement an algorithm to determine if a string has all unique characters
// implement with and without additional data structures
/*
 * method with data structure:
 * 1. write a class StringAnalyzer
 * 2. it will have a member function isUnique, which will take a string and return a bool
 *  a. it will iterate over the string, and increment the index in table that corresponds to the ascii number for that letter. 
 *  b. if a character is reached, and that array index is already 1, the string is not unique ad should return false
 *  c. else, return true
 * 3. it will have a private data member which will be an array of size 256, all initialized to zero. this will be the lookup table
 * 4. 
 */
#include <iostream>
#include "stringanalyzer.h"
using namespace std;
int main()
{
  StringAnalyzer myStringAnalyzer;
  bool result = myStringAnalyzer.isUnique("abcdefghijklmnopqrstuvwxyz");
  bool result2 = myStringAnalyzer.isUnique("apple");
  cout << boolalpha << result << "\n"
       << result2 << endl;
}
