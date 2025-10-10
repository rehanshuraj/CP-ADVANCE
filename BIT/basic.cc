#include<bits/stdc++.h>
using namespace std;

//function to convert decimal to binary 
void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}


int main(){
    printBinary(9);

    //find setbit 
    int a=9;
    int i=0; //check index=0 pe setbit hai ki nhi matlab 1 hai ki nhi
    if((a & (1<<i)) != 0){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;

}