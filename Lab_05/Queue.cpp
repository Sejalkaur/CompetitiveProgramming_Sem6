/*Problem Statement:
You are given an array A containing N positive integers. You can perform the following operation on the array:



Remove the maximum element from the array and divide it by 2 (integer division). If the result is still positive, put it back into the array.
You are also given M queries. The i-th query is represented by Bi. For the i-th query, you need to find the value of the maximum number in the array after performing Bi - 1 operations.


Constraints:

1 ≤ N, M ≤ 10^6

1 ≤ Ai < 2^63



Input Format:

The first line contains two space-separated integers N, M denoting the size of the array and the number of queries respectively. 
The second line contains N space-separated integers, denoting the array A.
The next M lines each contain a single integer, denoting Bi.


Output Format:

For each query, print the maximum number in the array after performing Bi - 1 operations.


Constraints

1 ≤ N, M ≤ 10^6

1 ≤ Ai < 2^63

It is guaranteed that the array will contain at least one element at the time of any query.

Bi > Bi−1



Sample Input 1 

3 5 

8 1 4 

1 

2 

3 

4 

5 

Sample Output 1 

8 

4 

4 

2 

2 

Explanation:

The array is {8, 1, 4}. 8 is the maximum number in the array. 

After the first operation, the array becomes {4, 1, 4}. So, 4 is the maximum number in the array. 

After the second operation, the array becomes {2, 1, 4}. So, 4 is the maximum number in the array. 

After the third operation, the array becomes {2, 1, 2}. So, 2 is the maximum number in the array. 

After the fourth operation, the array becomes {1, 1, 2}. So, 2 is the maximum number in the array. 

After the fifth operation, the array becomes {1, 1, 1}. So, 1 is the maximum number in the array.*/


#include <iostream>
#include <deque>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void calculate(deque<int>& arr, set<int>& sets, int max_) {
deque<int> queue;
for (int i = 1; i <= max_; ++i) {
int cur;
if (!arr.empty() && (queue.empty() || arr.back() > queue.back())) {
cur = arr.back();
arr.pop_back();
} else {
cur = queue.back();
queue.pop_back();
}

if (sets.find(i) != sets.end()) {
cout << cur << endl;
cur /= 2;
}

if (cur > 0) {
queue.push_front(cur);
}
}
}

int main() {
int n, m;
cin >> n >> m;

vector<int> arr(n);
for (int i = 0; i < n; ++i) {
cin >> arr[i];
}

sort(arr.begin(), arr.end());  // Sort array in ascending order

deque<int> deque_arr(arr.begin(), arr.end());  // Convert vector to deque

set<int> sets;
int max_ = 0;
for (int i = 0; i < m; ++i) {
int cur;
cin >> cur;
sets.insert(cur);
max_ = max(max_, cur);
}

calculate(deque_arr, sets, max_);

return 0;
}
