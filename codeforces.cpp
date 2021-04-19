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

int numcuts(int n, int a, int b, int c){

    int ans;

    return ans;
}


int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int x,y,z,p=0,i;
    i=min(a,min(b,c));
    i=n/i;
    for(x=i;x>=0;x--){
        for(y=0;y<=i;y++){
            z=abs((n-(a*x+b*y))/c);
            if((a*x+b*y+c*z)==n){
               p=max(p,x+y+z);
            }
        }
    }
    cout<<p<<endl;
    return 0;
}