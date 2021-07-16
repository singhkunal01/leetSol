class Solution {
public:
    bool checkIfPangram(string sentence) {
//           bool k=true;
// multiset<char> ms1{sentence.begin(),sentence.end()};
// set<char> s;
// for(char i=97;i<=122;i++) s.insert(i);
// for(auto x:s){
//   if(ms1.find(x)!=ms1.end()) k=true;
//   else{ k=false; break;}
// }
// return k;
//     }
          vector<int> vis(27,0);
    for(char s:sentence){
      vis[s-97+1]++;
    }
   for(int i=1;i<=26;i++) if(vis[i]==0) return false;
    return true;
    }
};
