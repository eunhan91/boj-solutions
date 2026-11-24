#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    string mystr;
    vector<char> alpha(26);

    iota(alpha.begin(), alpha.end(), 'a');

    cin>>mystr;

    for(const auto & elem: alpha){
        auto it=mystr.find(elem); 

        if(it==string::npos) cout<<"-1 ";
        else                 cout<<it<<" ";
    }
        
}