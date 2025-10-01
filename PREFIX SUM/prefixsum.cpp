//hum prefix sum me ek array ke prefix sum nikalte hai
//prefix sum ka matlab hai ki array ke ith index tak jitne bhi element hai unka sum
//prefix sum ka use hum kai tarike se kar sakte hai jaise ki range sum nikalne ke liye
//ya fir kisi array me kisi range ke element ko update karne ke liye

//1-D array me prefix sum nikalne ke liye hum ek naya array banate hai jisme hum prefix sum store karte hai
#include<bits/stdc++.h>
using namespace std;
//let take worst case n=10^6 or represented as 1e5+10;
const int n=1e5+10;
int a[n];
int psum[n];

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        psum[i]=psum[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<psum[r]-psum[l-1]<<endl;     
    }
}