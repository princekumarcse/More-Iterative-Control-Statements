//Write a program to print the first N odd natural numbers
#include<iostream>
using namespace std;
int main(){
    int n ,i=1;
    cout<<"Enter Number : ";
    cin>>n;
    for( int i=1 ;i<=2*n;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}