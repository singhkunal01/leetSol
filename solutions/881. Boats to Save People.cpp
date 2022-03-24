class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int st = 0,n = size(people),en = n - 1,totalBoats = 0;
        while(st<=en){
            if(people[st]+people[en]>limit) { totalBoats++,en--;}
            else{
                totalBoats++;
                st++,en--;
            }
        }
        
        return totalBoats;
    }
};
