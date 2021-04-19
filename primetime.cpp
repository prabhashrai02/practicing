#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<queue>
#include<vector>
#include<set>
#include<map>
#define lli long long int

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;

    while(test--){
        lli line, ans=0;
        cin>>line;
        lli  num_written[line], no_of_card[line];
        vector<lli> v;

        for(lli i=0; i<line; i++){
            cin>>num_written[i]>>no_of_card[i];
            
            for(lli j=0; j<no_of_card[i]; j++){

                v.push_back(num_written[i]);
            }
        }

        for(auto i= v.begin(); i!=v.end(); i++){
            lli temp= *i;

            for(auto it= v.begin(); it!=v.end(); it++){
                temp+=
            }
        }

        // cout<<"Case #"<<t<<": "<<ans<<endl;

    };

    return 0;
}