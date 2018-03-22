/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 20, 2018, 10:02 AM
 * Purpose:  Savitch Problem 5: Prime numbers without loop
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set rand number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char num2Tst; // 2-100
    bool prime; //Determine if num2tst is prime
    
    num2Tst=rand()%99+2; // [2,100]
    
    //Process/Calculations Here
    prime=num2Tst==2?true&&prime:num2Tst%2;
    prime=num2Tst==3?true&&prime:prime&&num2Tst%3;
    prime=num2Tst==5?true&&prime:prime&&num2Tst%5;
    prime=num2Tst==7?true&&prime:prime&&num2Tst%7;
    //Output Located Here
    cout<<static_cast<int>(num2Tst)<<" is "<<(prime?"Prime":"Not Prime")<<endl;

    //Exit
    return 0;
}

