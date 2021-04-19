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

void cyclic(int a[], int n){
    int temp= a[n-1];
    for(int i=n-1; i>0; i--){
        a[i]= a[i-1];
    }
    a[0]= temp;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cyclic(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}