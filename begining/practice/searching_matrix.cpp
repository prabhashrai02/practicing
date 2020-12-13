#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n,m;
    cout<<"Please enter the size of matrix: ";
    cin>>n>>m;
    int a[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int x;
    cout<<"Please enter an element to search: ";
    cin>>x;

    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(a[i][j]==x){
                flag = true;
                cout<<"positon: "<<i<<" "<<j<<" ";
            }
        }
    }
    if(flag){
        cout<<"Element found";
    }
    else 
    cout<<"element not found"<<endl;

    return 0;
}