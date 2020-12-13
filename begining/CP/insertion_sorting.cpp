#include<iostream>

using namespace std;

void insertion_sort(int a[], int n){

     for (int i=n-2; i>=0; i--)
    {
        int x= a[n-2];
        int y= (n-2)+1;

        while (a[y]<x && (n-1)<n){
            a[y-1]= a[y];
            y++;
        }
        a[y-1]= x;

        for (int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }



}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    

    insertion_sort(arr, n);
    
return 0;
}