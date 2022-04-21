class MyHashSet {
    
    //learn something about LOAD FACTOR in hashing (LF = n/k)
    int numBuckets;
    vector<vector<int>> buckets;
    int hashKey(int key){
        return key % numBuckets;
    }
public:
    MyHashSet() {
        numBuckets = 15000;
        buckets = vector<vector<int>> (numBuckets,vector<int>{});
    }
    
    void add(int key) {
        //check whether the key is present or not 
        int i = hashKey(key);
        if(find(buckets[i].begin(),buckets[i].end(),key)==buckets[i].end())//it is not present
            buckets[i].push_back(key);
    }
    
    void remove(int key) {
        //check whether the key is present or not 
        int i = hashKey(key);
        auto place = find(buckets[i].begin(),buckets[i].end(),key);//it is not present
           //if it is present then
        if(place!=buckets[i].end())
            buckets[i].erase(place);
    }
    
    bool contains(int key) {
       //check whether the key is present or not 
        int i = hashKey(key);
        if(find(buckets[i].begin(),buckets[i].end(),key)!=buckets[i].end())//it is not present
           return true;
        return false;
    }
};
​
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
