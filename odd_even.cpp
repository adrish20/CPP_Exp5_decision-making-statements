//Adrish Purkayastha
//PRN:23070123011
//EnTC A
//Experiment 5.a
//Program to check if a number is even or odd and display message accordingly
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%2==0){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
}
/*
OUTPUT:
Enter a number: 5
Number is odd
*/