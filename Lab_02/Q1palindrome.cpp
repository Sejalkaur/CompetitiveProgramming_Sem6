/*Problem Statement:
You are giving idea about swapping of characters and palindrome of the words to your brother. He has
asked you to show these two things together. As per the condition, your brother can give you any
number of random strings of different lengths. You can select any two random characters from the
string and swap them once. If it would make a palindrome word, print "palindrome" else print "non-
palindrome"
Input Format:
• First line contains the n number of lines your brother has written.
• The following n lines contains the string.
Output Format:
• print that the in lines are either "palindrome" or "non-palindrome" according to the condition.
Example:
• If your brother writes bbg you should print palindrome as swapping of b and g will make it bgo,
which is palindrome
Sample Test Cases
Test Case 1:
Expected Output:
5
pnplhahalpnp
mwddyzappuazyddwm
onmgkmappuamkgmno
xxbybtapputbybxx
fpgyhahaygpf
palindrome
*/
#include<iostream>
#include<vector>
using namespace std;
bool ispal(string s) {
int i = 0, j = s.length() - 1;
while (i < j) {
if (s[i] != s[j]) return false;
i++;
j--;
}
return true;
}
bool can(string s) {
int i = 0, j = s.length() - 1;
while (i < j) {
if (s[i] != s[j]) {
swap(s[i], s[j-1]);
if (ispal(s)) return true;
swap(s[i], s[j-1]);
swap(s[i+1], s[j]);
if (ispal(s)) return true;
swap(s[i+1], s[j]);
swap(s[i], s[i+1]);
if (ispal(s)) return true;
return false;
}
i++;
j--;
}
return true;
}
int main() {
int n;
cin >> n;
vector<string> st(n);

for (int i = 0; i < n; i++) {
cin >> st[i];
}

for (int i = 0; i < n; i++) {
if (can(st[i])) {
cout << "palindrome" << endl;
} else {
cout << "non-palindrome" << endl;
}
}
}
