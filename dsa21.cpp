#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2; i<n ; i++){
        if(n%2==0){
          cout<<"it is not a prime number";
            
        }
       

        else{
            cout<<"It is a  prime  number";
         
        }
     break;
    }
}