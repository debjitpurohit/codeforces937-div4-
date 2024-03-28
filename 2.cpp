#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>a;
        string s;
        // ##..
        for(int i=0;i<n;i++){
            if(i%2==0) s+="##";
            else s+="..";
        }
        // cout<<s<<endl;
        string st;
        //..##
        for(int i=0;i<n;i++){
            if(i%2==0) st+="..";
            else st+="##";
        }
        // cout<<st<<endl;
        for(int i=0;i<n;i++){
            if(i%2==0){
                a.push_back(s);
                a.push_back(s);
            }
            else{
                a.push_back(st); 
                a.push_back(st);
            }
        }
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }
    }

 