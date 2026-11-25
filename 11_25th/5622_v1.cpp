#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<char, int> dial;
    string numbers;

    cin>>numbers;

    for(char i='A'; i<='Z'; ++i){
        static int standard=1, value=2;

        dial[i]=value;

        if(i=='S' || i=='Z'){ 
            dial[i]--;
            standard=0;
        }

        if(standard >2){
            standard=0;

            value++;
        }

        standard++;
    }

    int total=0;

    for(const auto & number:numbers)
        total+=dial[number]+1;

    cout<<total;
}