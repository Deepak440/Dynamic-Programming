#include <bits/stdc++.h>
using namespace std;

string solve(){
   
   long long n ,d, c ,m;
   cin >> n >> d >> c >> m;
    string s;
    cin >> s;
    bool flag = false;
    long long d_count = 0;
    for(long long  i = 0; i < s.length() ;i++){
      if(s[i] == 'D'){
         d_count++;
      }

    }
    long long d_temp = 0;
    for(int i = 0; i < s.length(); i++){
    if((s[ i] == 'C' && c == 0 && d_count > d_temp) || (s[i] == 'D' && d == 0)){
      flag = true;
      break;
    }  

      if(s[i] == 'C' ){
         c--;
      }
      if(s[i] == 'D'){
         d--;
         d_temp ++;
         c += m;
      }

    }

    if(flag == true){
      return "NO";
    }else{
      return "YES";
    }
 
}



int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
   #endif
int t;
cin >> t;
int i = 1;
while(t--){
   cout << "Case #" << i << ": "<< solve() << endl;
   ++i;
}

   return 0;
}
