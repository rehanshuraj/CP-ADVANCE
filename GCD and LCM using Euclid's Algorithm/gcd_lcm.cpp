/*
formula:
gcd-least common divisor
lcm-least common multiple
lcm(a,b) = (a*b)/gcd(a,b)
*/

#include<bits/stdc++.h>
using namespace std;

//a is divisor and b is dividend
int gcd(int a, int b){
    if(b==0) return a;

    //exchange a and b for next call 
    return gcd(b, a%b);
}

//divisor become dividend and dividend%divisor(remainder) become divisor