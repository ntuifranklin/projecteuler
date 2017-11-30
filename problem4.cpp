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
int i,j,k,maxpalin,n,q,r, p;
int t[6]={0,0,0,0,0,0};//we only have 6 digits in the multiplication of two three digits numbers
maxpalin=0;
for(i=100;i<MAX;i++){
		
	for(j=i;j<MAX;j++){//start at j=i since we don't want to compute i*j and j*i
		n = i*j ;
		p=n;
		q=FIVE;//we only have 6 digits in the multiplication of two three digits numbers
		
		while(n>0){//getting the digits that composes the number
			t[q] = n % 10 ;			
			n = (n-t[q])/10;
			q--;
		}
		
		if(q < (FIVE)){//If we had a a more than one digit number
			//We now check if the number is a palindrome
			r=q+1;q=5;
			bool palin = true ;
			while(r<=q){
				if(t[r] != t[q]){
					palin = false ; break ;
				}else{
					r=r+1; q=q-1;
				}
			}

			if(palin){
				if( maxpalin < p)//we only consider the new palindrom if the previous palindrome is smaller than the current
				maxpalin = p ; //the current multiplication is a palindrome
			cout << "\n At value i=" << i << " and j=" << j << " we have a palindrome " << p; 
			}
			
		}
		
	}
}
	cout << "\n maximum palindrome : " << maxpalin; 

	return 0;

}
