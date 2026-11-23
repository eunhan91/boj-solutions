#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int n_subject;

    cin>>n_subject;

    vector<double> score_of_ea_subject(n_subject);

    for(auto & score:score_of_ea_subject)
        cin>>score;

    auto itr=max_element(score_of_ea_subject.begin(), score_of_ea_subject.end());

    cout<<(accumulate(score_of_ea_subject.begin(), score_of_ea_subject.end(),0)*100)/(*itr*n_subject);
}