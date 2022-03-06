#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
using namespace std;
void solution()
{
    string s,t;
     int f=0;
		cin>>s>>t;
		for(int i=0;i<s.size();i++){
			string s1=s.substr(0,i+1),s2=s.substr(0,i);
			reverse(s2.begin(),s2.end());
			s1+=s2;
			if(s1.find(t)!=-1){
				f=1;
				break;
			}
		}
		cout<<(f?"YES":"NO")<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}