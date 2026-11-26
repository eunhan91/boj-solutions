#include <iostream>
#include <string>

using namespace std;

int main(){
    int decimal=0, weight;
    string input;

    cin>>input>>weight;

    for(auto it=input.rbegin(); it != input.rend(); ++it){
        static int base=1;

        if(isalpha(*it)) decimal+=base * (*it-'A'+10);
        else             decimal+=base * (*it-'0');

        base*=weight;
    }

    cout<<decimal;
}