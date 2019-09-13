#include <iostream>
#include <iomanip>
#include <string>
#include "stringanalyzer.h"
StringAnalyzer::StringAnalyzer()
{
  setTable();
}
bool StringAnalyzer::isUnique(string str)
{
  setTable();
  for (size_t i = 0; i < str.length(); i++)
  {
    if (table[static_cast<int>(str[i])] == 0)
      table[static_cast<int>(str[i])] += 1;
    else
      return false;
  }
  return true;
}
bool StringAnalyzer::isPermutation(string str1, string str2)
{
  setTable();                                // make sure table is set for use
  for (size_t i = 0; i < str1.length(); i++) // increment indices for str1
  {
    table[static_cast<int>(str1[i])] += 1;
  }
  for (size_t i = 0; i < str2.length(); i++) // decrement indices for str2
  {
    table[static_cast<int>(str2[i])] -= 1;
  }
  for (size_t i = 0; i < 256; i++) // if any indices are not zeroed out, the strings were not equal
  {
    if (table[i] != 0)
      return false;
  }
  return true;
}
void StringAnalyzer::setTable()
{
  for (size_t i = 0; i < 256; i++)
  {
    table[i] = 0;
  }
}