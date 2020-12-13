#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
    cout<<"Enter your age: ";
    int age;
    cin>>age;
    cout<<endl;

    if (age==18 || age<21)
    {
        cout<<"You should start learning about investing";
    } 
    else if (age >=21)
    {
        cout<<"you should start investing";
    }
    else 
    {
        cout<<"dont even look for share market";
    
    }

    getch();
}