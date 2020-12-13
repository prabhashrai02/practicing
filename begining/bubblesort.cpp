#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int a;
    cout<<"Please enter the size of array: ";
    cin>>a;
    int array[a];

    for(int i=0; i<a; i++)
    {
        cin>>array[i];
    }

    int counter=1;
    while(counter<a-1)
    {
        for(int i=0; i<a-counter; i++)
        {
            if (array[i]>array[i+1])
            {
                int temp= array[i+1];
                array[i+1]= array[i];
                array[i]= temp;
            }
        }
        counter++;
    }
    for(int i=0; i<a; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}