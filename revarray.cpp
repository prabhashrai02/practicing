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

void reverse(int a[], int start, int end){

    if(start<end){
        int temp= a[start];
        a[start]= a[end];
        a[end]= temp;

        reverse(a, ++start, --end);
        // end--;
        // start++;
    }

}

void print(int a[], int end){
    for(int i=0; i<=end; i++){
        cout<<a[i]<<" ";
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

    reverse(a, 0, n-1);

    print(a, n-1);

    return 0;
}