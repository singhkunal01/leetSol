class Solution {
public:
    bool canConstruct(string ransomNote , string magazine) {
        //MY OWN SOLUTION USING HASHING -> dated : july 18 2021
vector<int> hashForRansomNote (26);
vector<int> hashForMagazine(26);
for(char x:ransomNote) hashForRansomNote [x-97]++;
for(char x:magazine) hashForMagazine[x-97]++;
bool flag=true;
for(int i=0;i<size(ransomNote );i++){
  if(hashForRansomNote [ransomNote [i]-97]<=hashForMagazine[ransomNote [i]-97]) 
      flag=true;
  else {
        flag = false;
        return flag;
       }
 }
return flag;
    }
};
