//Maximum money to rob
/*
Given a street of N houses (a row of houses), each house having K amount of money kept inside; 
now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses. 
Find the maximum money he can rob.
*/
#include <bits/stdc++.h>
using namespace std;
int maximumMoney(int n,int k){
    return (n-n/2)*k;
}
int main() {
    int t;//test cases
    cin>>t;
    while(t--){
        int n,k;//n=no. of houses,k=money in each house;
        cin>>n>>k;
        cout<<maximumMoney(n,k)<<endl;
    }
}
