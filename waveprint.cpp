#include<iostream>
#include<algorithm>
#include<bits/stdtr1c++.h>
using namespace std;
int main()  {
    int n;
    cout<<"Enter the rows :";
    cin>>n;
    int m;
    cout<<"Enter the columns: ";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   //wave form
   cout<<"Wave forming matrixes :"<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
cout<<endl;
        }
        
        else {
            for(int j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}