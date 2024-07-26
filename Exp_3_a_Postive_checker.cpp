//Alok Chawat
//PRN:23070123016
//Batch:EnTC A-1
//experiment 3.a
//program to check if a number is positive or negative
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num>0){
        cout<<"The Number is positive";
    }
    else if (num<0){
        cout<<"The Number is negative";
    }
    else{
        cout<<"The Number is Zero";
    }
}
/*
**OUTPUT**5
Enter a number: -90
-90 is negative
*/
