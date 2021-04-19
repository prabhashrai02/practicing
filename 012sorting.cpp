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

void sort(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp= a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }
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

    sort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}