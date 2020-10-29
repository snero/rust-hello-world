#include <iostream>
using namespace std;

int isPrimeNumber(int);

int main()
{
   bool isPrime;
   int mycount;
   for(int n = 2; n < 1000000; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == true)
	 mycount++;
   }

   std::cout << "There are " << mycount << " primes.\n";
   return 0;
}

// Function that checks whether n is prime or not
int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}
