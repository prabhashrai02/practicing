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
        int n, x;
        cin>>n>>x;

        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(a[i]);
        }

        if(n - s.size() >= x){
            cout<<s.size()<<endl;
        }
        else{
            int temp = x- (n-s.size());
            int ans= s.size()-temp;
            cout<<ans<<" \n";
        }
    };

    return 0;
}