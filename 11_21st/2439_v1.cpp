#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int n_star;

    cin>>n_star;

    for(int i=1; i<=n_star; ++i)
        cout<<setw(n_star)<<string(i, '*')<<'\n';
    
}