#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1079;

/*
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
*/

tuple<string, string>
testFixture1()
{
  return make_tuple("1.1.1.1", "1[.]1[.]1[.]1");
}

/*
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
*/

tuple<string, string>
testFixture2()
{
  return make_tuple("255.100.50.0", "255[.]100[.]50[.]0");
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.defang(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.defang(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}