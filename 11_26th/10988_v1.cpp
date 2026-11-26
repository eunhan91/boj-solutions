#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    bool is_palindrome=true;

    cin>>str;

    auto it=str.begin();
    auto rit=str.rbegin();

    for(size_t i=0; i <= str.size()/2; ++i){
        if(*it != *rit){
            is_palindrome=false;
            break;
        }

        it++;
        rit++;
    }

    cout<<is_palindrome;
}