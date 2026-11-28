#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, base;

    cin>>N;

    base=pow(2, N);
    base++;

    base*=base;

    cout<<base;
}