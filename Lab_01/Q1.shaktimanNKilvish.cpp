/*There are n number of people having some "Evil Power" values. Kilvish wants to select the most evil person and kill everyone else, so he writes the
"Evil Power" values of all people on the wall. Shaktimaan wants to select the most innocent person (having
least Evil Power value). They decided to kill one man at a time and erase his value from the wall. This continues
until there is only one man left. Kilvish makes the first move, then Shaktimaan alternate turns. Shaktimaan
wants to minimize the last number that would be left on the wall, while Kilvish wants to maximize it. The rest of
the world wants to know what number will be left on the wall after n-1 turns if both Shaktimaan and Kilvish
make optimal moves.
Input
The first line contains one integer n (1 ≤ n ≤ 1000) - the number of "Evil Power" values on the wall.
The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 106).
Output
Print one number that will be left on the wall.*/


#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> evilP(n);
for(int i=0;i<n;i++){
cin>>evilP[i];
｝
sort(evilP.begin(), evilP.end());
int innocent=0;
int evil=n-1;
bool kilturn=true;
while(innocent<evil){
if(kilturn){
innocent++;
}else{
evil--;
｝
kilturn=!kilturn;
｝
cout<<evilP[evil]<<endl;
return 0;
｝
