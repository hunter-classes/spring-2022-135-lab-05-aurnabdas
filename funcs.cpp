#include <iostream>
#include "funcs.h"


bool isDivisibleBy(int n, int d)
{
    if(n % d == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

bool isPrime(int n)
{
    if(n>=2)
    {   
        if(n==2)
        {
            return true;
        }

        if(n % 2 == 0)
        {
            return false;
        }

        int num = 3;
        for(int i=0; i<=num; i++) 
        {
            if(n % num == 0 && num != n)
            {
                return false;
            }
        num+=2;
        }
    }
    else
    {
        return false;
    }  
    return true;
}

int nextPrime(int n)
{
    int counter = n + 1;
    for(int i=n; i<=counter; i++)
    {
        if(isPrime(counter) == true)
        {
            return counter;
        }

        counter+=1;
        
    }
    return 0;
}

int countPrimes(int a, int b)
{
    int counter = 0;
    for(int i=a; i <= b; i++)
    {
        if(isPrime(i) == true)
        {
            counter+=1;
        }
    }
    return counter;
}

bool isTwinPrime(int n)
{
    if(isPrime(n) == false)
    {
        return false;
    }
    if(isPrime(n)==true)
    {
        if(isPrime(n+2)==true || isPrime(n-2)==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return 0;
}

int nextTwinPrime(int n)
{
    int counter = n + 1;
    for(int i=n; i<=counter; i++)
    {
        if(isTwinPrime(counter) == true)
        {
            return counter;
        }

        counter+=1;
        
    }
    return 0;
}
int largestTwinPrime(int a, int b)
{
    int counter = b;
    for(int i=b; i>=a; --i)
    {
        
        if(isTwinPrime(counter)==true)
        {
            
            return counter;

        }
        counter-=1;
        
        
    }
    return -1;
}





