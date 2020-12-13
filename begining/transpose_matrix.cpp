#include<iostream>

using namespace std;

int main ()
{
    int x_size, y_size;
    cout<<"Please enter size of matrix: ";
    cin>>x_size>>y_size;
    int a[x_size][y_size];

    for(int i=0; i<x_size; i++){
        for(int j=0; j<y_size; j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }

    for (int i=0; i<x_size; i++){
        for(int j=i; j<y_size; j++){
            int temp =  a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i=0; i<x_size; i++){
        for (int j=0; j<y_size; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}