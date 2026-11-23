#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> seq;

    for(int i=0; i<10; ++i){
        int number;

        cin>>number;

        seq.insert(number%42);
    }

    cout<<seq.size();
}