#include <iostream>
using namespace std;

int main(){
    //datainput
    int input;
    cout << "input number: ";
    cin >> input;

    if(input > 100 || input < -100){
        cout << "the number is outside of allowed range";
    }else{

    //check if it's positive
    if(input > 0){
        if(input % 2 == 0){
            cout << "it's an even positive number";
        }else{
            cout << "it's an odd positive number";
        };

    //check if it's negative
    }else if(input < 0){
        if(input % 2 == 0){
            cout << "it's an even negative number";
        }else{
            cout << "it's an odd negative number";
        };
        
    //if neither, then it's neutral
    }else{
        cout << "it's a neutral";
    };
    };
    return 0;
}
