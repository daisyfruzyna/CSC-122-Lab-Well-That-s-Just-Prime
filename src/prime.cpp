#include <string>
#include <vector>
using namespace std;

vector<int> prime(int input) {
   vector<int> primes;
   int i = 2;
   while (input > 1) {
      if (input % i == 0) {
         primes.push_back(i);
         input /= i;
         i = 2;
      } else {
         i++;
      }
   }
   return primes;
}

