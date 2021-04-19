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

// void sort(int a[], int n){
//     for(int i=0; i<n-1; i++){
        
//         if(a[i]>a[i+1]){
//             int temp = a[i];
//             a[i]= a[i+1];
//             a[i+1]= temp;
//         }
//     }
// }

void print(int a[], int k){

    cout<<a[k-1]<<" ";
    
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cin>>k;

    sort(a, a+n);
    print(a, k);

    return 0;
}