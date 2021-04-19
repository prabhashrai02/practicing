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

    int mini= a[0];
    int maxi= a[0];

    for(int i=1; i<n; i++){
        if(a[i]<a[0]){
            mini= a[i];
        }
        else if(a[i]>a[0]){
            maxi= a[i];
        }
        else{
            continue;
        }
    }

    cout<<"Minimum is "<<mini<<endl;
    cout<<"Maximum is "<<maxi<<endl;

    return 0;
}