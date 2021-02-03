/*
/ Skeleton file for arrays.cpp for CS16, 2021, UCSB
/ Copyright © 2021 by Zachary Sisco. All rights reserved.
/
*/

// DO NOT MODIFY THESE NEXT 6 LINES - DO NOT ADD TO THEM
#include <iostream> // for cout, cin
#include <fstream>  // for ifstream
#include <cstdlib>  // for exit
using namespace std;
#include "headers.h"    // contains the function declarations
#include "constants.h"  // contains 4 global variables


int main( )
{
    // DO NOT MODIFY THESE NEXT 3 LINES - DO NOT ADD TO THEM
    ifstream ifs;
    int size = MAXSIZE, array[MAXSIZE];
    getArray(ifs, FILENAME, array, size);

    

    // hints for the tasks: 
    // all that needs to be in here is simple calls the functions, like these: 
    // in addition to, some print to std.out statements.
    // 
    // Your main() will ideally look clean and uncluttered and be made up
    // mostly of function calls.
    // 
    // Example:
    print_array(array, size);
    cout<<"Max = "<<maxArray(array, size)<<endl;
    cout<<"Min = "<<minArray(array, size)<<endl;
    cout<<"Sum = "<<sumArray(array, size)<<endl;
    evensArray(array, size);
    primesArray(array, size);
    AllSearches(array, size);



    // ...
    // printArray(array, size);
    // max = maxArray(array, size);
    // min = minArray(array, size);
    // ...
    // ...etc...
    

    // PUT MISSING CODE HERE

    return 0;
}

// PUT MISSING FUNCTION DEFINITIONS HERE
void print_array(int arr[], int asize){
    
    for(int i=0; i< asize-1;i++){
        cout<<arr[i]<<", ";
    }

    cout<<arr[asize-1]<<endl;
    
}

int maxArray(int arr[], int asize){
    int max = 0;
    for(int i=1;i < asize;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int minArray(int arr[], int asize){
    int min = 0;
    for(int i=1;i < asize;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int sumArray(int arr[], int asize){
    int sum=0;
    for(int i=0; i<asize;i++){
        sum+=arr[i];
    }
    return sum;
}

void evensArray(int arr[], int asize){
    cout<<"Evens: ";
    for(int i=0; i < asize ; i++){
        if(arr[i]%2 == 0){
            cout<<arr[i]<<", ";
        }
    }
    cout<<"end"<<endl;
}

void primesArray(int arr[], int asize){
    cout<<"Primes: ";

    
    for(int i=0; i < asize;i++){
        int x=0;
        if(arr[i]>0){
            for(int a=2; a < arr[i]; a++){           
                if(arr[i]%a==0){
                    x+=1;              
                }
            }
            if(x==0 &&arr[i]!=1){
                cout<<arr[i]<<", ";
            }
            
        
        }

    }
    cout<<"end"<<endl;
}

int SeqSearch(int arr[], int array_size, int target){   
    
    for (int i=0; i < array_size;i++){
        int a=-1;
        if(arr[i] == target){
            a=0;
            if(arr[a]!=target && a<array_size) {
                a+=1;
            }
        }
        
    }
    return a;
}

void AllSearches(int array[], int array_size){
    
    cout<<"Searches:\n";
    for(int i=0; i < NSEARCHES;i++){
        if(SeqSearch(array, array_size, SEARCHES[i]) != - 1){
            cout<<"Looking for "<<SEARCHES[i]<<". Found at index: "<<i<<endl;

            
        }
        else{
            cout<<"Looking for "<<SEARCHES[i]<<". Not Found!"<<endl;        
        }

    }
}
