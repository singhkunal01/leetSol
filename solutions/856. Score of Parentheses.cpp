class Solution {
public:
    int scoreOfParentheses(string s) {
         int score = 0,depth = 0;
         //here in this solution we are checking the depth(inner depth) for the particular open paranthesis
        //if the prev contains '(' then it shows that we are at innermost brackets;
        char prev = '(';
        for(char &i:s){
            if(i=='('){
                depth++;//if we get the continuous '(' it shows that we are going deeper in the innermost direction
                
            }
            else{
                depth--;//we are coming outside means we found a pair so decrease the depth
                if(prev=='(')//checking again .. is the previous '(' then it means we have to move outside again we found one more pair
                {
                    score +=pow(2,depth);//score is the 2^depth pairs
                }
            }
            prev = i;//updating the prev character by curr evertime
        }
    return score;
    }
};
