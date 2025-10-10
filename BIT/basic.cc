#include<bits/stdc++.h>
using namespace std;

//function to convert decimal to binary 
void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num>>i) & 1); //10 bit tk ke jitne bhi bits honge  a me uske left most 10 bit ko rightmost index pe leaao and 1 ke sath & lelo ki bit 1 h ya 0 and aise hi 10 bit tk check krlo
    }
    cout<<endl;
}
int main(){
    printBinary(9);
    //(1<<5) means 2 ka power 5
    //in bit we are indexing from right to left
    //find setbit 
    int a=9;
    int i=0; //check index=0 pe setbit hai ki nhi matlab 1 hai ki nhi
    if((a & (1<<i)) != 0){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;

    //if setbit(1) krna ho kisi index pe toh OR operator use krlena
    int j=2; // index 2 pr bit set 1
    printBinary(a | (1<<j));

    //how to unset the bit
    int k=3; //unset bit(0) at index 3
    printBinary(a & (~(1<<k)));

    //toggle
    //xor--> same bit hoga toh 0 and different 1
    printBinary(a ^ (1<<2)); //index 2 pe jo bhi bit hoga a me usse invert krdo

    //count set bit
    int cnt=0;
    for(int i=31; i>=0; i++){
        if(a & (1<<i) !=0) cnt++;
    }
    cout<<cnt<<endl;
    //inbuilt functions for count (int datatype not greater than 31)
    cout<<__builtin_popcount(a)<<endl;
    //for above 31 bit
    cout<<__builtin_popcountll(1LL<<35)<<endl;
}