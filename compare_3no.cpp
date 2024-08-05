//Adrish Purkayastha
//PRN:23070123011
//EnTC A
//Experiment 5.b
//Program to read three numbers from user and find out which is larger and display message accordingly
#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if (num1>num2 && num1>num3){
        cout<<num1<<" is largest";
    }
    else if(num2>>num1 && num2>num3){
        cout<<num2<<" is largest";
    }
    else{
        cout<<num3<<" is largest";
    }
}
/*
OUTPUT:
Enter three numbers: 5 3 7
7 is largest
*/