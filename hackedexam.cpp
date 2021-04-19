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

    int test, t=1;
    cin>>test;

    while(test--){
        int ans=0, n, q;
        cin>>n>>q;
        
        string array[n];
        int arraymark[n];

        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            array[i]= s;

            cin>>arraymark[i];
        }

        for(int i=0; i<n; i++){
            cout<<array[i]<<" \n";
        }

        // cout<<"Case #"<<t++<<": "<<ans<<endl;
    };

    return 0;
}