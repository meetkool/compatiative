#include <bits/stdc++.h> 
using namespace std;

 int main(){
 int n;
 cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int find=0;
    cin>>find;
    int lo=0,hi=n-1;
    int mid;
    while (hi-lo > 1)
    {
        int mid = (hi+lo)/2;
        if (v[mid]<find){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    if (v[lo]==find){
        cout <<lo<<"\n";
    }else if(v[hi] == find){
        cout<<hi<<"\n";

    }else{
        cout<<"not found";
    } 
return 0;
 }