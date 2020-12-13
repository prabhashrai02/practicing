#include<iostream>

using namespace std;

int main ()
{
    int num1, num2, num3;
    cin>>num1>>num2>>num3;
    
    int matrix1[num1][num2];
    for (int i=0; i<num1; i++){
        for (int j=0; j<num2; j++){
            cin>>matrix1[i][j];
        }
    }
    
    int matrix2[num2][num3];
    for(int i=0; i<num2; i++){
        for (int j=0; j<num3; j++){
            cin>>matrix2[i][j];
        }
    }

   int matrix3[num1][num3];
    for(int i=0; i<num1; i++){
        for(int j=0; j<num2; j++)
        matrix3[i][j]= 0;
    }

    for(int i=0; i<num1; i++){
        for(int j=0; j<num3; j++){
            for(int k=0; k<num2; k++){
                matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    for (int i=0; i<num1; i++){
        for(int j=0; j<num3; j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0 ;
}