#include <iostream>
#include <iomanip>
#include <string>
#include "stringanalyzer.h"
StringAnalyzer::StringAnalyzer()
{
  for (size_t i = 0; i < 256; i++)
  {
    table[i] = 0;
  }
}
bool StringAnalyzer::isUnique(string str)
{
  for(size_t i = 0; i < str.length(); i++)
  {
    if(table[ static_cast<int>(str[i]) ] == 0) 
      table[ static_cast<int>(str[i]) ] += 1;
    else 
      return false;
  }
  return true;
}