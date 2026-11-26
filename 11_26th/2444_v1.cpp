#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i=1; i<2*n; i+=2)
        cout<<string((2*n-1-i)/2, ' ')+string(i, '*')<<'\n';
    for(int i=2*n-3; i>0; i-=2)
        cout<<string((2*n-1-i)/2, ' ')+string(i, '*')<<'\n';
}