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

    int n, m;
    cin>>n>>m;

    int a[n], b[m];
    set<int>s;

    for(int i=0; i<n; i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    
    for(int i=0; i<m; i++){
        cin>>b[i];
        s.insert(b[i]);
    }

    cout<<s.size()<<endl;

    return 0;
}