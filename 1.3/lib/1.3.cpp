#include <iostream>
#include "url-ifier.h"
using namespace std;
int main()
{
  Urlifier myUrlifier;
  cout << myUrlifier.urlify("Mr. John Smith") << endl;
}
