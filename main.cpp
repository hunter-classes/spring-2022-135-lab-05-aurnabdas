#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "isDivisibleBy(100,25): " << isDivisibleBy(100,25) << "\n";
  std::cout << "isPrime(5): " << isPrime(5) << "\n";
  std::cout << "nextPrime(14): "<< nextPrime(14) << "\n";
  std::cout << "countPrimes(2,11):" << countPrimes(2,11) << "\n";
  std::cout << "isTwinPrime(3): " << isTwinPrime(3) << "\n";
  std::cout << "nextTwinPrime(23): "<< nextTwinPrime(23) << "\n";
  std::cout << "largestTwimPrime(5,18): "<< largestTwinPrime(5, 18) << "\n";

  return 0;
}
