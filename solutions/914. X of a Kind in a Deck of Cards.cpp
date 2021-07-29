class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
unordered_map<int,int> store;
for(auto &x:deck) store[x]++;
  bool isEven=false; int leastVal= INT_MAX;
for(auto &k:store) 
  if(k.second<leastVal) 
    leastVal=k.second;
/*here for test case 1 what we get is => {leastVal == 2} which means maximum value of a
element whose has number of duplicates is equal to leastVal similarly if deck is {1 2 1 1 2 3 3 2 3}
then leastVal for this is 2 and if it is less than 2 it means there exist a element who can't
make a pair so return false */
if(leastVal<2) return false;
for(int i=2;i<=leastVal;i++){
  bool checked = true;
  for(auto ks:store){
    if(ks.second%i!=0){
      checked=false;
      break;
    }
  }
  if(checked) return true;
}
return false;
​
    }
};
