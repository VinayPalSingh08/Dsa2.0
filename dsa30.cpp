#include<iostream>
using namespace std;
int main(){
    int amount=1330;
    int note=0;
    int num;
    cin>>num;
    switch(num){
        case 100:note=amount/100;
                 amount=amount%100;
                 cout<<"number of hundred ruppee notes"<<note<<endl;
                
        case 50:note=amount/100;
                amount=amount%50;
                cout<<"numbrt of 50 ruppees note"<<note<<endl;
                
           case 20:note=amount/20;
                 amount=amount%20;
                 cout<<"number of 20  ruppe notes"<<note<<endl;
                

        case 1:note=amount/1;
                amount=amount%1;
                cout<<"numbrt of 1 ruppees note"<<note<<endl;
            
                       
                 
    }
}
