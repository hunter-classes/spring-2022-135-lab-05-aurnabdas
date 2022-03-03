#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"


TEST_CASE("task a")
{
    CHECK(isDivisibleBy(10,5) == true);
    CHECK(isDivisibleBy(35, 17) == false);
}

TEST_CASE("task b")
{
    CHECK(isPrime(5) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(9) == false);
    CHECK(isPrime(15) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(21) == false);
    CHECK(isPrime(25) == false);

}

TEST_CASE("task c")
{
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
}

TEST_CASE("task d")
{
    CHECK(countPrimes(2,11) == 5);
    CHECK(countPrimes(0,10) == 4);
}

TEST_CASE("task e")
{
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(23) == false);
}

TEST_CASE("task f")
{
    CHECK(nextTwinPrime(2) == 3);
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(-1) == 3);
    CHECK(nextTwinPrime(17) == 19);
    CHECK(nextTwinPrime(23) == 29);
}

TEST_CASE("task g")
{
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);

}







