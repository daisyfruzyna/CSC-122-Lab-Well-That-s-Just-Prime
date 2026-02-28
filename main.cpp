#include <iostream>

#include "src/prime.hpp"
#include <vector>
using namespace std;

int main() {
  // Your driver program goes here
  vector<vector<int>> rets;
  rets.push_back(prime(73));
  rets.push_back(prime(20));
  rets.push_back(prime(2048));
  rets.push_back(prime(126));
  rets.push_back(prime(67));
  for(const vector<int>& i : rets) {

    for(const int& j : i)
      cout << j << ", ";
    cout << endl;
  }
}
