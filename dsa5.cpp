#include<iostream>
using namespace std;
int main (){
     int sum = 0;
    int i=1;
    int n;
    cin>>n;
   
    while(i<=5){
        sum= sum + i;
        i=i+1;
    }
    cout<<"the value of sum is "<<sum;
}