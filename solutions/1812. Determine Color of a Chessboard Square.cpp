class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
//  <=======MY SOLUTION=========>
        
 /* map<char,int> st={{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8}};       
 char f=coordinates[0],s=coordinates[1];
   return ((st[f]+(s-48))&1); */
        
//  <======= 2ND SOLUTION=========>
        
/*  int i= (int)(coordinates[0]-97 +1) + (int)(coordinates[1]-48);
if(!(i&1)) return false;
return true;  */
    
//  <======= BY TAKING HELP FROM DISCUSSION=========>
        return (coordinates[0]+coordinates[1])&1;
        //it means whenever the sum of ASCII's of both the coordinates is even that means the square is black hence return false;
    }
};
