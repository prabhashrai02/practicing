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
        int n;
        cin>>n;

        lli a[n];
        vector<int> v;
        int flag= 0;
        static lli temp;

        for(lli i=0; i<n; i++){
            cin>>a[i];

            if( i>0 && a[i]<a[i-1]){
                flag= 1;
                temp= i;
            }

            if(flag==1){
                v.push_back(a[i]);
            }
        }

        for(lli i=0; i<temp; i++){
            v.push_back(a[i]);
        }


        lli t1= 0; 
        for(auto i= v.begin(); i!=v.end(); i++){
            t1++;
            if(*i>*(i+1) && i<v.end()){
                cout<<"NO\n";
                break;
            }

            int t= v.size();

            if(t1==t){
                cout<<"YES\n";
                cout<<"1\n";
            }
        }


    };

    return 0;
}