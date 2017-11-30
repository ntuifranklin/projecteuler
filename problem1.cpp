#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>
#include <math.h>  
#include <time.h>

using namespace std;

//#include "functions.h"

const int FIVE = 5;
const int THREE = 3;
const int TWO = 2;
const int FIFTEEN = (FIVE * THREE);
const int MAX = 1000;

/*
 * 

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

 * 
 * */
int main(int argc, char* argv[]) {

	clock_t start = clock();// start time
	// Execuatable code
	int i, max3, max5, k,sum,mult3, mult5;
	char c ;
	sum = 0; mult3 = 1; mult5 = 1;
	max3 = ceil( (MAX / THREE) );// upperbound division of 1000 by 3 which is 333.333 approximately 334
	max5 = ceil( (MAX / FIVE) );
	int m [TWO][MAX / THREE];
	
		//printf("\n-----Multiples of 3 and 5--------");
		//printf("\n-----Multiples of 3 -------------Multiples of 5 -------");
	for (i = 1; i <= max3; i++) {
		mult3 = THREE * i;
		m[0][i] = mult3;
		// we caclulate the multiple of five all the way to 1000/5 = 200
		if (i < max5) {
			mult5 = FIVE * i;
			m[1][i] = mult5;
		}
		else {
			mult5 = 0;
			m[1][i] = 0;
		}

		if ( (mult3 % FIVE) == 0 ) {// If we got to a multiple of fifteen when computing the multilpe of three then we don't add it as it will already have been calculated and added by the five multple previously
			mult3 = 0;;
		}
		
		sum = sum + mult3 + mult5;


		//printf("\n-----%7d -------------%7d -------",mult3,mult5);
	}


	
	cout <<"\n The sum is  : "<< sum; 
	clock_t stop = clock();
	double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
	printf("\nTime elapsed in ms: %f", elapsed);
	cout << "\n max3  : " << max3; 
	cout << "\n max5  : " << max5;
 
	
	


	return 0;

}
