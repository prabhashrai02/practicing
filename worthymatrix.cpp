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

    int test;
    cin>>test;

    while(test--){
        lli n, m, k;
        cin>>n>>m>>k;

        double matrix[n+1][m+1];

        for(lli i=0; i<=n; i++){
            for(lli j=0; j<=m; j++){
                if(i==0 || j==0){
                    matrix[i][j]=0;
                }
                else{
                    cin>>matrix[i][j];
                }
            }
        }

        for(lli i=0; i<=n; i++){
            double prv=0;
            for(lli j=0; j<=m; j++){
                matrix[i][j]+=prv;
                prv= matrix[i][j];
            }
        }
       
        for(lli i=0; i<=m; i++){
            double prv=0;
            for(lli j=0; j<=n; j++){
                matrix[j][i]+=prv;
                prv= matrix[j][i];
            }
        }

        lli min_matrix= min(m, n);
        lli ans=0;

        for(lli u=1; u<=min_matrix; u++){
            for(lli i=u; i<=n; i++){
                for(lli j=u; j<=m; j++){
                    if((matrix[i][j] + matrix[i-u][j-u] - matrix[i][j-u] - matrix[i-u][j])/(u*u)>=k){
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    };

    return 0;
}