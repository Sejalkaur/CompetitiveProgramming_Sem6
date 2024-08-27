/*Problem Statement:
In a large software company, there are multiple teams that need to conduct their meetings in conference
rooms. Each team is assigned a specific time slot during which they can use a conference room. The
problem is that the number of conference rooms is limited, so you need to find the minimum number of
conference rooms required to accommodate all the meetings without any overlap.
You are given the start and end times for each meeting, and your task is to determine the minimum
number of conference rooms needed to ensure that no two meetings overlap.
Input format:
1. The first line of the input number represents the total number of meetings, n.
2. This is followed by n sets of four integers, where each set represents:
• Start time of the meeting (hours and minutes)
• End time of the meeting (hours and minutes)
The format of each meeting's time information is:
• start_HH start_MM end_HH end _MM (each one is separated by a space)
Output Format:
• The output contains an integer It represents the minimum number of conference rooms required.
Sample Test Cases
Test Case 1:
Expected Output:
2 9 0 10 0 11 0 12 0
1*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
int s_h,s_m;
int e_h,e_m;
cin>>n;
vector<pair<int,int>> time;
for (int i=0;i<n;i++){
cin>>s_h>>s_m>>e_h>>e_m;
int start=s_h*100+s_m;
int end=e_h*100+e_m;
time.push_back({start,+1});
time.push_back({end,-1});
}
sort(time.begin(),time.end(),[](const pair<int,int>& a,const pair<int,int>& b){
if (a.first==b.first){
return a.second<b.second;
}
return a.first<b.first;
}
);
int max_t=0;
int cnt=0;
for (auto it : time){
if (it.second==1){
cnt++;
}
else if(it.second==-1){
cnt--;
}
max_t=max(max_t,cnt);

}
cout<<max_t<<endl;

}
