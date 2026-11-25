#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){
    array<int, 26> dial{2,2,2,
                        3,3,3,
                        4,4,4,
                        5,5,5,
                        6,6,6,
                        7,7,7,7,
                        8,8,8,
                        9,9,9,9};

    string numbers;

    cin>>numbers;

    int total=0;

    for(const auto & number:numbers)
        total+=dial[number-'A']+1;

    cout<<total;
}