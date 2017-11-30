#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>
#include <math.h>  
#include <time.h>
#include <climits>

using namespace std;

//#include "functions.h"

const int MAX = 10001;


int main(int argc, char* argv[]) {
int i,n,k,j,lmax;
bool isprime ;
long t[MAX];//an array of long

	t[0] = 2;t[1] = 3;t[2] = 5;t[3] = 7;
	t[4] = 11; t[5] = 13;
	k=6; n=16 ;
	while(k<MAX){
		isprime = true ;
		lmax = ceil(sqrt(n))+1;		
		
		for(j=2;j<=lmax;j++){
			if( n%j == 0){
				isprime=false ; 				
			}
			
		}
		
		if(isprime){
			t[k] = n;
			cout << "\n prime "<<k<<" = " <<n ;
			k++;
		}
		n++;
	}
	cout <<"\n final "<< t[MAX-1] ;
	return 0;

}
