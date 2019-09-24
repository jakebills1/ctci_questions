#include <vector>
#include <string>
using namespace std;
class Urlifier
{
  public: 
    string urlify(string str)
    {
      for(size_t i = 0; i < str.length(); ++i)
      {
          if (str[i] != ' ')
            data.push_back(str[i]);
          else
          {
            data.push_back('%');
            data.push_back('2');
            data.push_back('0');
          }
      }
      string urlifiedString(data.begin(), data.end());
      return urlifiedString;
    }
  private:
    vector<char> data;
};
