#include<iostream>

using namespace std;

int test(int x){
    int a, b;
    cin>>a>>b;

    int temp=0;
    int even=0;
    
    for (int i=1; i<=a; i++){
        for (int j=1; j<=b; j++){
            temp= i+j;
            
            if (temp%2==0){
                even++;
            }
        }
    }
    
    cout<<even<<endl;
    
    x--;
    
    if (x!=0){
        test(x);
    }
    return 0;
}

int main(){
    int test_case, num1, num2;
    
    cin>>test_case;

    test(test_case);

return 0;
}