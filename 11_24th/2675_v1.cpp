#include <iostream>
#include <string>

using namespace std;

int main(){
    int n_test;

    cin>>n_test;

    while(n_test--){
        int n_rep;
        string mystr;
        string new_str="";
        cin>>n_rep>>mystr;

        for(int i=0; i<mystr.size(); ++i)
            new_str+=string(n_rep, mystr[i]);

        cout<<new_str<<'\n';
    }
}