#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    if(a>='A' && a<='Z'){
        cout<<"this is uppercase";
    }
    else if(a>='a'&& a<='z'){
         cout<<"this is lower case";

    }
    else if(a>='0' && a<='9'){
      cout<<"This is a digit";
    }
    return 0;

}