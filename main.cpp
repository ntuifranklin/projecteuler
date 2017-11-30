//
//  main.cpp
//  problem8
//
//  Created by Franklin Nkokam Ngongang on 11/29/17.
//  Copyright © 2017 Franklin Nkokam Ngongang. All rights reserved.
//

#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream
#include <math.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;
const long MAX = 1000;
const long NMULT = 13;
int main(int argc, const char * argv[]) {
    // insert code here...
    long prevmult,mult,maxmult,lmax,i,k,j;
    string line ;
    ifstream myfile;
    maxmult = 1 ; prevmult = 1; mult = 1;
    myfile.open ("stream.txt",ios::in);
    int numb[1000];
    lmax = 50 ;//Assmuming it will be 50
    if (myfile.is_open())
    {
         k=0;//We start by extracting the file contents to an array of 1000 integers
        while ( getline (myfile,line) )
        {
            //cout << line << '\n';
           
            lmax = line.size();
            for(i=0;i<lmax;i++){
                    numb[k] = (int)((char)line[i] - (char)48);
                
                    //printf( "%d", numb[k]) ;
                k++;
                
            }
            //cout << "\n" ;
            
        }
        
        prevmult=1; maxmult=1; mult=1;
        i=0;j=0;
        while(i<MAX){
            
            for(k=i;k<(i+NMULT);k++){
                if(numb[k] <= 0){//If the current number to multiply is 0 then skip to the next one
                    mult = 1; j=-1; continue ;
                }else{
                    
                    mult = (mult * numb[k]);
                    if( mult > maxmult ){
                        maxmult = mult ;
                    }else{
                        prevmult = mult ;
                    }
                    
                    if(j==(NMULT)){//we have done 13 multiples already so far
                        
                        if( numb[k - (j-1)] != 0 ){
                           mult = mult / (numb[k - (j-1)]) ;
                            
                        }
                        j=-1;
                    }
                    
                    
                }
               j++;
            }
            
            
            i++;
         }
        
        
        cout << "\n maximum multiplication "<<maxmult <<" lmax "<< lmax << "\n";
        
        myfile.close();
    }else{
        cout << "Unable to open file\n";
        system("pwd");
        
    }
   
    //cout << maxmult ;
    return 0;
}
