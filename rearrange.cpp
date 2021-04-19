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

void swap(int *a, int *b){
    int temp= *a;
    *a= *b;
    *a= temp;
}

void rearrange(int a[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            if(i!=j){
                swap(a[i], a[j]);
            }
            j++;
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

    rearrange(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}