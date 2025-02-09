#include <iostream>
using namespace std;

int main(){
    int n = 1;
    cin >> n;
    
    int row = 1;
    
    while(row<=n){

        // print first triangle
        int col = 1;
        while(col<=n - row + 1 ){
            cout << col << " ";
            col++;
        }
        
        int star = 1;
        while(star<=row - 1){
            cout << "*" << " ";
            star++;
        }
        
        int star2 = 1;
        while(star2<=row - 1){
            cout << "*" << " ";
            star2++;
        }
        
        int num;
        while(num = col - 1){
            cout << num << " ";
            num--;
            
        }
        
        
        



        cout << endl;
        row++;
        
        
    }
    
    
     
}