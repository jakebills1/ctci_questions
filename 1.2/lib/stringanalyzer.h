#include <iostream>
#include <string>
using namespace std;
class StringAnalyzer
{
public:
  StringAnalyzer();
  bool isUnique(string);
  bool isPermutation(string a, string b);

private:
  int table[256];
  void setTable();
};