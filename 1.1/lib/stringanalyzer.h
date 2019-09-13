#include <iostream>
#include <string>
using namespace std;
class StringAnalyzer
{
public:
  StringAnalyzer();
  bool isUnique(string);

private:
  int table[256];
};