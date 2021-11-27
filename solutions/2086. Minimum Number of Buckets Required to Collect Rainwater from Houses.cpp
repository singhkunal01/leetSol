class Solution {
public:
    int minimumBuckets(string street) {
    int n = street.length(), numOfBuckets = 0;
    //we'll do the whole process only and only if the character is:'H'
    for (int i = 0; i < n; i++) {
        //do the process if the character is H
        char current = street[i];
        if (current == 'H') {
            /*check the previous place whether we placed the bucket or not if we placed it previously then
            no need to check further just skip it*/
            if (i - 1 >= 0 and street[i - 1] == 'B' ) continue;
            /*if the next place is empty and still we haven't filled the place then need to increase the counter tand simply
            place the bucket over there .*/
            if (i + 1 < n and street[i + 1] == '.' ) {
                numOfBuckets++;
                street[i + 1] = 'B';
                continue; /*if we come in this condition then definitely this
                need to be true hence skip all other conditions*/
            }
            if (i - 1 >= 0 and street[i - 1] == '.') {
                numOfBuckets ++;
                continue; /*if we come in this condition then definitely this
                need to be true hence skip all other conditions*/
            }
            return -1;
        }
    }
    return numOfBuckets;        
    }
};
