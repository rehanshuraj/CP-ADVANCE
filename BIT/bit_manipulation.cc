#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num>>i) &1);
    }
    cout<<endl;
}

int main(){
    //in (divide and multiply) by 2 using bit is less time consuming than normal method
    //basically fast operation hai in using bit 
    int n=5;
    cout<<(n>>1)<<endl; //right shift by 1 is basically divide by 2
    cout<<(n<<1)<<endl; //left shift by 1 is basically multiply by 2

    //character uppercase to lowercase and vice versa
    
}