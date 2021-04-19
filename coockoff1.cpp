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
        int amin, bmin, cmin, tmin, a, b, c;
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;

        if(amin>a || bmin>b || cmin>c || tmin>(a+b+c)){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    };

    return 0;
}