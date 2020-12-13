#include<iostream>

using namespace std;

int main(){
    int arr[3], arra[3];
    for (int i=0; i<3; i++){
        cin>>arr[i];
    }
    for (int i=0; i<3; i++){
        cin>>arra[i];
    }

    int a=0, b=0;

    for (int i=0; i<3; i++){
        if (arr[i]>arra[i]){
            a++;
        }
        
        if (arr[i]<arra[i]){
            b++;
        }
        
    }
    cout<<a<<" "<<b;
return 0;
}