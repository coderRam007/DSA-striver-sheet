#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {cout<<c<<" ";c=c^1;
        }
        cout<<"\n";
    }
    return 0;
}