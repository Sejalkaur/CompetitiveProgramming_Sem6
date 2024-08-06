/*He wrote a two-digit number on the blackboard and asked Rohit to find the smallest number that should have the sum of its digits equal to that
number. He also added one more constraint that all the digits in the answer should be distinct. Rohit got stuck
in this question as Jadoo is not able to help because of cloudy weather.
You are also Rohit's friend and want to help him in this problem. Write a program to solve this problem so that
you can directly tell the answer within seconds in Rohit's ear. If the answer does not exist, you say "Not
Possible"
Input
A single positive integer X (which Bittoo wrote on the blackboard).
Output
If that positive integer number exists, print the number; otherwise print "Not Possible".*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n>0 && n<10){
  cout<<n<<endl;
  }
  else if(n>=18){
  cout<<"Not Possible"<<endl;
  ｝
  else if(n>0 && n<18){
    for(int i-1;i<=9;1++){
    int j=n-i；
    if（j>0 && j<=9 && i！=j）｛
    cout<<min(i, j)<<max(i, j)<<endl;
    return 0;
  ｝
  ｝
  return 0;
  }
