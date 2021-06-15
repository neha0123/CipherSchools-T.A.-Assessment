#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//items given
    int W;
    cin>>W;//capacity of given weight
    int wt[n],val[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];//given weight array
    }
     for(int i=0;i<n;i++){
        cin>>val[i];//given val array
    }
    int dp[1001][1001];//assume dp array
        memset(dp,-1,sizeof(dp));// set all value to -1;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=W;j++){
                if(i==0||j==0){
                    dp[i][j]=0;//base condition if 
                }
            }
        } 
        for(int i=1;i<=n;i++){
            for(int j=1;j<=W;j++){
        if(wt[i-1]<=j){
             dp[i][j]= max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
        }
        else{
             dp[i][j]=dp[i-1][j];
        }
            }
        }
        cout<< dp[n][W];
     return 0;
}

