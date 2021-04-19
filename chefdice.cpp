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
        lli n, result=0;
        cin>>n;

        result+=(n/4)*44;

        if(n<4){
            if(n==1){
                result+=20;
            }
            else if(n==2){
                result+=36;
            }
            else{
                result+=51;
            }
        }
        else{
            if(n%4==1){
                result+=32;
            }
            else if(n%4==2){
                result+=44;
            }
            else if(n%4==3){
                result+=55;
            }
            else{
                result+=16;
            }
        }
        cout<<result<<"\n";
    };
    
    return 0;
}