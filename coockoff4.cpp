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

void subArray(lli arr[], lli n)
{
    int ans=0;
    for (lli i=0; i <n; i++)
    {
        lli tempans=0;
        for (lli j=i; j<n; j++)
        {   
            for (lli k=i; k<=j; k++){

                // cout << arr[k] << " ";
                lli temp= arr[k];
                tempans= temp & arr[k]; 
            }

            ans= ans | tempans;
        }
    }
    cout << ans <<" ";
    cout<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli test;
    cin>>test;

    while(test--){
        lli n, q;
        cin>>n>>q;

        lli a[n];

        for(lli i=0; i<n; i++){
            cin>>a[i];
        }

        lli x[q], v[q];

        for(lli i=0; i<q; i++){
            cin>>x[i]>>v[i];
        }

        subArray(a, n);

        for(int i=0; i<q; i++){
            a[x[i]-1]=v[i];
            subArray(a, n);
        }
    };

    return 0;
}