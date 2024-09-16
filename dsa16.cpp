#include<Iostream>
using namespace std;
int main () {
    int i = 4;
    
    cout<<(i++)<<endl;
    //4 , i=5
    cout<<(++i)<<endl;
    // 6
    cout<<(i--)<<endl;
    //i=6 , 5
    cout<<(--i)<<endl;
    //4
}