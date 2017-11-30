#include <stdio.h>
#include <tchar.h>
#include <string>
#include <iostream>
#include <math.h>  
#include <time.h>
#include <climits>

using namespace std;

//#include "functions.h"

const int MAX = 1000;
const int FIVE = 5;

int main(int argc, char* argv[]) {
int i,n;
bool eureka,found ;

found = false ;
	n=21;
	while(!found){		
		eureka = true ;
		for(i=2;i<=20;i++){
			if( n%i == 0){
				continue ; 
			}else{
				eureka = false ;
				break ;
			} 	
		}
		
		if(eureka){
			found = true ; 
		}else{
				n=n+1;//increase n to the next step
		}
		
	}
	cout << n ;
	return 0;

}
