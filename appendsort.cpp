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

    int test, t=0;
    cin>>test;

    while(test--){
        t++;
        lli n, ans=0;
        cin>>n;

        lli array[n];

        for(lli i=0; i<n; i++){
            cin>>array[i];
        }

        int temp=0;
        for(lli i=0; i<n; i++){
            
            if(array[i]>temp){
                temp= array[i];
            }
            else if(array[i]==temp){
                array[i]*=10;
                temp=array[i];
                ans++;
            }
            else if(array[i]<temp){
                
                lli count=0;
                while(temp>=array[i]){
                   
                    for(lli k=0; k<10; k++){

                        lli temp_array=array[i];
                        array[i]*=10;
                        array[i]+=k;
                        if(array[i]>temp){
                            count++;
                            temp=array[i];
                            ans+=count;
                            break;
                        }
                        array[i]= temp_array;
                    }

                    if(array[i]==0){
                        lli anstemp=0;
                        int counttemp=0;
                        for(lli num=1; num<10; num++){
                            array[i]= num;
                            // counttemp++;
                            for(lli k=0; k<10; k++){

                                counttemp=1;
                                array[i]*=10;
                                array[i]+=k;
                                if(array[i]>temp){
                                    counttemp++;
                                    temp=array[i];
                                    break;
                                }
                            }
                                if(array[i]>temp){
                                    temp=array[i];
                                    break;
                                }
                        }

                        if(temp<array[i]){

                            anstemp = min(INT_MAX, counttemp);
                            ans+=anstemp;
                        }

                        array[i]=9;
                    }
                    else{
                        array[i]*=10;
                        count++;
                    }
                }
            }
        }

        cout<<"Case #"<<t<<": "<<ans<<endl;
    };

    return 0;
}