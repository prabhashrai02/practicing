#include<iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int a=n-2, b=m-2;

    int newarr[a][b];
    int sum;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            
            sum= arr[i][j]
        }
    }



    
    
return 0;
}