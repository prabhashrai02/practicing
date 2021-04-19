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

    string s;
    cin>>s;
    int a[124]={0};

    for(int i=0; i<s.length(); i++){
        int temp = s[i];
        for(int i= 97; i<=123; i++){
            if(temp==i){
                a[i]++;
            }
        }
    }
    
    for(int i=97; i<124; i++){
        if(a[i]>1){
            cout<<char(i)<<" "<<a[i]<<endl;
        }
    }

    return 0;
}