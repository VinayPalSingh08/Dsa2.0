#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int sum;
    for(int i=1;i<10;i++){
         sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        

    }
}