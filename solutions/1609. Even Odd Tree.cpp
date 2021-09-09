        return false;
return true;
}
public:
    bool isEvenOddTree(TreeNode* root) {
            queue<TreeNode *> ds({root});
int level  = 0; 
bool checkEvenOrOdd = false;bool track= false; //for even it remains false else it switches to the true;
while(!ds.empty()) {
    int len = ds.size();
    vector<int> levelWiseNodes(len);
for(int i = 0;i<len;i++){
    TreeNode *tempNodes = ds.front();
    ds.pop();
    levelWiseNodes[i]=tempNodes->val;
    if(tempNodes->left) ds.push(tempNodes->left);
    if(tempNodes->right) ds.push(tempNodes->right);
}
      if (checkEvenOrOdd) {
                if (isStrictlyDecreasing(levelWiseNodes) and
                    all_of(levelWiseNodes.begin(), levelWiseNodes.end(),
                           [](const int val) { return !(val & 1); }))
                    track = true;
                else
                    return false;
            }
            if (!checkEvenOrOdd) {
                if (isStrictlyIncreasing(levelWiseNodes) and
                    all_of(levelWiseNodes.begin(), levelWiseNodes.end(),
                           [](const int val) { return val & 1; }))
                    track = true;
                else
                    return false;
            }
            checkEvenOrOdd = !checkEvenOrOdd;  
            // to switch the keys according to the level here
            // false is  for even and true is for odds
        }
        return true;
​
    }
};
