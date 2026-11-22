#include <iostream>
#include <array>

using namespace std;

int main(){
    array<bool, 30>  Who_did_not_submit_their_assignment{};

    for(int i=0; i<28; ++i){
        int submit;

        cin>>submit;

        Who_did_not_submit_their_assignment[submit-1]=true;
    }

    for(int i=0; i<Who_did_not_submit_their_assignment.size(); ++i)
        if(Who_did_not_submit_their_assignment[i]==false) cout<<i+1<<endl;
    
}