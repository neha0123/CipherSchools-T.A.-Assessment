#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;//number of gadgets
   cin>>n;
   int p[n];
   for(int i=0;i<n;i++){
       cin>>p[i];//prices given by robot
   }
   int money,count=0;
   cin>>money;//customer having the money
   int k;
   cin>>k;//choose k list items
   for(int i=0;i<n;i++){
       if(money>=p[i]){
          // if((p[i]%money)==0){
               count++;
           //}
       }
   }
   if(k==count){//if predition by robot is right
       cout<<"Right";
   }
   else{
       cout<<"Wrong";
   }
   
    return 0;
}

