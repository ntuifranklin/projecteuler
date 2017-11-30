#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>
#include <math.h>  
#include <time.h>

const int FIVE = 5;
const int THREE = 3;
const int TWO = 2;
const int FIFTEEN = (FIVE * THREE);
const int MAX = 4000000;

//global fibo that computes fibonacci numbers and stores them so that we don't compute them twice
int fibon[MAX]; 
int INDEX=0; // This number points to the index to where we have already calculated fibo in the array fibon, so we don't calculate the same value more than once

using namespace std;
int fibo(int n); // pre-declaration

#include "functions.h"


int main(int argc, char* argv[]) {
	int i, k,value,sum;
	clock_t start = clock();// start time
	//initialise fibo array with negative numbers so that we know what we have calculated so far


	// Execuatable code
	sum = 0; k = 0;// k points to the index of the array that we already have computed fibonacci
	i = 0; value = 0;
	while ( value < MAX) {
		value = fibo(i); 
		i++;
		if (value % 2 == 0)
			sum = sum + value; 
		printf("\nFibo [ %d ] = %d", i,value);
	}

	printf("\n Sum =  %d", sum);
	/*
	cout <<"\n The sum is  : "<< sum; 
	clock_t stop = clock();
	double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
	printf("\nTime elapsed in ms: %f", elapsed);
	cout << "\n max3  : " << max3; 
	cout << "\n max5  : " << max5;
	*/
	
	


	return 0;

}