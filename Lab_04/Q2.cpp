/*Problem Statement:
Mr. Travis works at Blueberry, a firm responsible for keeping records of items sold by Amazon
merchants. To maintain the secrecy of these records, Mr. Travis applies a simple encoding technique.
Each item's sales count is stored in reverse order, with each digit recorded separately. For example, if
an item sold 475 units, the sales record is stored as 5, 7, 4, with each digit saved in reverse sequence.
One day, Mr. Travis is tasked with calculating the total sales of two items. These sales counts are
provided as two separate sequences, with the digits of each count listed in reverse order. To find the
total, Mr. Travis must add these reversed sequences together and then store the result, again in
reversed order. Help Mr. Travis by writing a function that takes these two reversed sequences,
computes the total sales count, and returns the sum in the same reversed format. You can assume that
the sequences do not contain any leading zeros, except when the sales count is exactly 0.
Input Format:
• First line contains an integer which represents the sales count of first item in reversed order.
• Second line contains an integer which represents the sales count of second item in reversed
order.
Output Format:
• The output contains a single line which represents sum of the two numbers (total sales count),
with the digits in reversed order.
Sample Test Cases
Test Case 1:
Expected Output:
178
23
309*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int result = 0;
	
	stack<int> s1, s2;
	
	while (a) {
		int val = a % 10;
		s1.push(val);
		a /= 10;
	}
	
	while (b) {
		int val = b % 10;
		s2.push(val);
		b /= 10;
	}
	
	int carry = 0;
	int sum;
	while (!s1.empty() || !s2.empty()) {
		sum = carry;
		if (!s1.empty()){
			sum += s1.top();
			s1.pop();
		}
		
		if (!s2.empty()) {
			sum += s2.top();
			s2.pop();
		}
		
		carry = sum / 10;
		sum %= 10;
		if (result == 0) result += sum;
		else result = result * 10 + sum;
	}
	
	if (carry > 0) {
		result = result * 10 + carry;
	}
	cout << result << endl;
	return 0;
}
