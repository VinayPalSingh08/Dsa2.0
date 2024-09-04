#include<iostream>
using namespace std;
//to check whether the number is prime or not
int main (){
  int n;
  cin>>n;
  int i = 2;
  while(i<n){
    if(n%i==0){
  cout<<"it is not a prime number "<<i<<endl;
}
else{
    cout<<"prime"<<i<<endl;
}
      i=i+1;
   }
}