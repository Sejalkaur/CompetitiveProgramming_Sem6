/*Problem Statement:
You are given a string S which contains only the character 'C, ), T, T. ( and '). Determine whether the given string S is beautiful or not. If S is beautiful then print 1, otherwise print 0.
A string of parentheses is considered beautiful if it satisfies the following conditions:
• The empty string is beautiful.
• If P is beautiful, then (P), {P}, and [P] are also beautiful.
• If P and Q are beautiful, then the concatenation PQ is also beautiful.
For example:
"(D)" and "(0)[0]" are beautiful.
"([0))" and "0)" are not beautiful.

Input Format:
• The first line contains a single integer T, which represents the number of test cases.
• The following T lines each contain a single string S, which needs to be checked.
Output Format:
For each test case, output a single line containing:
• 1 if the string is beautiful.
• O if the string is not beautiful.Sample Test Cases
Test Case 1:
3
Problem Statement:
You are given a string S which contains only the character 'C, ), T, T. ( and '). Determine whether the given string S is beautiful or not. If S is beautiful then print 1, otherwise print 0.
A string of parentheses is considered beautiful if it satisfies the following conditions:
• The empty string is beautiful.
• If P is beautiful, then (P), {P}, and [P] are also beautiful.
• If P and Q are beautiful, then the concatenation PQ is also beautiful.
For example:
"(D)" and "(0)[0]" are beautiful.
"([0))" and "0)" are not beautiful.
Constraints:
1sT$10
1s|S|$105
Input Format:
• The first line contains a single integer T, which represents the number of test cases.
• The following T lines each contain a single string S, which needs to be checked.
Output Format:
For each test case, output a single line containing:
• 1 if the string is beautiful.
• O if the string is not beautiful.
Sample Test Cases
Test Case 1:
Expected Output:
3
｛｝
())
Expected Output:
1
0
*/
#include<bits/stdc++.h>
using namespace std;
int mainOt
int n;
cin>>n;
vector<string> S(n);
for(int i=0;i<n;i++){
cin>>S[i];
｝
stack<char>st;
for(int i=0;i<n;i++){
for(char ch: Sil){
//if opening bracket then push
if(ch=='(' | | ch=='{' | | ch=='['){
st. push(ch);
}else{
if(st.empty()) cout<<@<<endl;
char top = st.top;
//if the top opening bracket matches the closing bracket then pop
if((ch==')' && top=='(') ||
(ch=='3' &&
top=='{') ||
(ch==']' && top=='[')){
st.pop();
}elset
cout<<0<<endl;
｝｝｝｝
return st. empty;
return 0;
｝
