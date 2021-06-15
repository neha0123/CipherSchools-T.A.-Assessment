//problem 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;//given integer n
    cin>>n;
    vector<int> v;//assume this array store final result
      int sum=0;//initial sum
      if(n==2){
          cout<<-1<<" "<<1;// if 2 elements then sum =0
      }
      else{
      for(int i=0;i<n-1;i++){
          v.push_back(i);//push all item into vector
          sum+=i;//store sum till n-1 elements
      }
      v.push_back(-sum);//last element set to value =sum of n-1 elements
      for(int i=0;i<n;i++){
      cout<<v[i]<<" ";//return vector
      }
      }
    return 0;
}

