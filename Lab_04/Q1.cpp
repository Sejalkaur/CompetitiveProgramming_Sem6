/*Problem Statement:
In the world of stock market analysis, a financial wizard has been assigned the task of evaluating
historical stock prices. The challenge is to determine the number of consecutive days before each day
where the stock price was less than or equal to the price on that day. As an employee at the firm, you
have been given a list of daily stock prices, and your task is to calculate, for each day in the list, the
span of days (count of consecutive days) up to and including that day, where the stock price did not
exceed the price on that day.
Input Format:
• First line contains an integer n representing the number of days.
• Second line contains n space-separated integers where each integer represents the stock price
on a given day.
Output Format:
• A single line containing n space-separated integers (An array). Each integer represents the
number of consecutive days (including the current day) where the stock price was less than or
equal to the price on that day.
Hint: Use a stack to efficiently compute the span for each day.
Sample Test Cases
Test Case 1:
Expected Output:
7
100 80 60 70 60 75 85
1•1-1-2-1-4•6-
へ*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> f(vector<int> &prices, int n){
stack<int> s;
vector<int> span(n);
for(int i=0;i<n;i++){
while(!s.empty() &&
prices[s.top]<=prices[i]){
s.pop();
if(s.empty){//prev prices were smaller
span[i]=i+1;
felsell
span[i]=i-s.top);
}s. push(i);
return span;
}
int main(){
int n;
cin>>n;
vector<int> prices(n);
for(int i=0;i<n;i++){
cin>›prices[i];
vector<int> results f(prices, n);
for(int i=0;i<n;i++){
cout<<results[i]<<" "
return 0;
}
