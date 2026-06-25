#include <bits/stdc++.h>
using namespace std;
int main(){
int q;
cin>>q;
while(q){
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(n%2==0){
        if(k<=n/2){
            cout<<2*k;
        }
        k-=n/2;
        else if (k<=n/4){
            cout<<4*k-1;
        }
        k-=n/4;
        else{
            k-=n/2;
            cout<<4*k-3;
        }
    }
    else {
        if(k<=n/2){
            cout<<2*k;
        }
        k-=n/2;
        else if (k<=n/4){
            cout<<4*k-3;
        }
        k-=n/4;
        else{
            k-=n/2;
            cout<<4*k-3;
        }
    }


    --q;
}


}