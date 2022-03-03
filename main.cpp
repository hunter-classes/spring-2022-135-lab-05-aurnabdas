#include <iostream>
#include "funcs.h"

int main()
{
  bool n = isDivisibleBy(100,25) 
  std::cout << "isDivisibleBy" << n << "\n";
  std::cout << nextPrime(14) << "\n";
  std::cout << countPrimes(2,11) << "\n";
  std::cout << isTwinPrime(3) << "\n";
  std::cout << nextTwinPrime(23) << "\n";

  std::cout << largestTwinPrime(5, 18) << "\n";
  std::cout << largestTwinPrime(1, 31) << "\n";
  std::cout << largestTwinPrime(14, 16) << "\n";



  
  

  return 0;
}
