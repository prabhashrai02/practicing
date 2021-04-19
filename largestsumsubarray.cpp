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

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }   

    int sum= 0, ans= INT_MIN;

    for(int i=0; i<n; i++){
        sum+=a[i];

        if(sum<0){
            sum=0;
        }

        ans= max(sum, ans);
    }

    cout<<ans<<endl;

    return 0;
}