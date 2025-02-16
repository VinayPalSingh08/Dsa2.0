#include<iostream>
using namespace std;
int isEven(int num){
    if(num%2==0){
        return 1 ;
    }
    return 0;
}
int main(){
    int num;
    cin>>num;
   if(isEven(num)){
    cout<<"it is even"<<endl;
   }
   else{
    cout<<"not even";
   }
return 0;

}
