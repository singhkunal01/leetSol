class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
    vector<int> res;
    queue<int> q;
    for (int i = 1; i < 10; i++) {
        q.push(i);
    }
​
//know time to generate the sequence from those 9 numbers
    while (!q.empty()) {
        int num = q.front();
        q.pop();
        //check whether the number in front of queue is the range of [low,high] or not
        if (num >= low and num <= high) res.push_back(num);
        //check if the number is greater than the high which means we don't need that so break there.
        if (num > high) return res;
//if the both conditions do not satisfied then we have to generate the sequential number with the help of that current num.
        int temp = num % 10;
        if (temp < 9) {
            q.push(num * 10 + temp + 1);
        }
        // print(mp(q, mp(num, temp)))
    }
    return res;
    }
};
