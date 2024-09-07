#include<iostream>
using namespace std;
//concept is just increasing the value of every element
int main () {
    int n;
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n){
        int j ;
        while(j<=n){
            cout<<count;
            count=count+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;

    }
    return 0;

}