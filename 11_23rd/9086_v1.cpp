#include <iostream>
#include <string>

using namespace std;

int main(){
    int n_string;

    cin>>n_string;

    while(n_string--){
        string mystr;

        cin>>mystr;

        cout<<mystr.front()<<mystr.back()<<endl;
    }
}