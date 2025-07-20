// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: Calculator Program (EXPERIMENT: 1B)

// CODE:

#include <iostream>
using namespace std;
int main() {
    
    float num1, num2, sum=0, diff, prod, div;
    cout<<"ENTER FIRST NUMBER:";
    cin>>num1;
    cout<<"ENTER SECOND NUMBER:";
    cin>>num2;
    
    sum = num1+num2;
    cout<<"SUM OF GIVEN NUMBERS:"<<sum<<endl;
    diff = num1-num2;
    cout<<"DIFFERENCE OF THE NUMBERS:"<<diff<<endl;
    prod = num1*num2;
    cout<<"PRODUCT OF TWO NUMBERS:"<<prod<<endl;
    div = num1/num2;
    cout<<"DIVISION OF TWO NUMBERS:"<<div<<endl;
    
    return 0;
    
}

// OUTPUT:
// ENTER FIRST NUMBER:4
// ENTER SECOND NUMBER:2
// SUM OF GIVEN NUMBERS:6
// DIFFERENCE OF THE NUMBERS:2
// PRODUCT OF TWO NUMBERS:8
// DIVISION OF TWO NUMBERS:2
