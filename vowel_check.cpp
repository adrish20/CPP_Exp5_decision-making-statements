//Adrish Purkayastha
//PRN:23070123011
//EnTC A
//Experiment 5.c
//Program to check if a letter is vowel or consonant
#include <iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter a character: ";
    cin>>letter;
    if (letter=='a'||letter=='A'||letter=='e'||letter=='E'||letter=='i'||letter=='I'||letter=='o'||letter=='O'||letter=='u'||letter=='U'){
        cout<<letter<<" is a vowel";
    }
    else{
        cout<<letter<<" is a consonant";
    }
}
/*
OUTPUT:
Enter a character: b
b is a consonant
*/
