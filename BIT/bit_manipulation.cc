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
    //binary representation of A and a is differ only on 5th position
    for(char i='A'; i<='Z'; i++){
        cout<<i<<endl;
        printBinary(i);
    }
    
    for(char i='a'; i<='z'; i++){
        cout<<i<<endl;
        printBinary(i);
    }
    char A='A';
    //to get A to a set 1 to binary rep of A at position 5 basically
    char a = A | (1<<5);
    cout<<a<<endl;
    //



}