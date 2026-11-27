#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int decimal, pos;
    string new_number;

    cin>>decimal>>pos;

    while(decimal!=0){
        if(decimal%pos < 10) new_number.push_back(static_cast<char>(decimal%pos+'0'));
        else                 new_number.push_back(static_cast<char>(decimal%pos+55));

        decimal/=pos;
    }

    ranges::reverse(new_number);

    cout<<new_number;
}