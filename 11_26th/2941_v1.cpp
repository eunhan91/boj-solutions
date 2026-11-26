#include <iostream>
#include <set>

using namespace std;

int main(){
    int weight=0;
    string str;
    set<string> alpha{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    cin>>str;

    for(size_t i=1; i<str.size(); ++i)
        if(str[i]=='-' || str[i]=='=' || str[i]=='j'){
            if(i>=2 && alpha.find(str.substr(i-2, 3)) != alpha.end()) weight+=2;
            else if(alpha.find(str.substr(i-1, 2)) != alpha.end()) weight++;
        }
    

    cout<<str.size()-weight;
}