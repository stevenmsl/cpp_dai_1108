#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol1079;
using namespace std;

string Solution::defang(string address)
{
  string result;
  for (auto c : address)
    if (c == '.')
      result += "[.]";
    else
      result.push_back(c);

  return result;
}
