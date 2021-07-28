class Solution {
public:
    bool isPerfectSquare(int num) {
/* int move = 1;
  while(num>0){
    num-=move;
    move+=2;
    if(num==0) return 1;
  }
  return 0; */
 long left = 1 ,right = num;
  while(left <= right){
 long mid = left + ((right - left) >> 1);
if(mid*mid==num) return true;
else if(mid*mid<num) left = mid + 1;
else right = mid - 1;
  }
return false;
​
    }
};
