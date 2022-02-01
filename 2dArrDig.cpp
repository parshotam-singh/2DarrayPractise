#include <bits/stdc++.h>
#include<cmath>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int pDig=0,sDig=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                pDig+=a[i][j];
            }
            if(i+j==n-1){
                sDig+=a[i][j];
            }
        }
     }
     cout<<abs(pDig-sDig);
    return 0;
} 