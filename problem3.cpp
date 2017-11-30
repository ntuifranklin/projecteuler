#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>
#include <math.h>  
#include <time.h>
#include <climits>

using namespace std;

//#include "functions.h"

const long MAX = 775147;

int main(int argc, char* argv[]) {

const long numm = 600851475143;
long largestFact = 0;
long  * factors = new long[2];
 
for (long i = 2; i * i < numm; i++) {
    if (numm % i == 0) { // It is a divisor
        factors[0] = i;
        factors[1] = numm / i;
 
        for (int k = 0; k < 2; k++) {
            bool isPrime = true;
            for (long j = 2; j * j <  factors[k]; j++) {
                if (factors[k] % j == 0) {
                    isPrime = false;
                    break;
                 }
             }
             if (isPrime && factors[k] > largestFact) {
                largestFact = factors[k];
            }
        }
    }
}
	

	
		cout << "\n factor   at " << factors[0] <<" = "<< factors[1] ;
	
	

	return 0;

}
