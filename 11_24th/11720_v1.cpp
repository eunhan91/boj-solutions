#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main(){
    int n_number;
    string seq;

    cin>>n_number>>seq;

    cout<<accumulate(seq.begin(), seq.end(), 0-(n_number*'0'));
}