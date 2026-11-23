class RandomizedSet {
public:
    vector<int>randSet;
    unordered_map<int,int>idx;
    //constructor
    RandomizedSet() {
        randSet.clear();
        idx.clear();
    }
    
    //insert val and return true - if not present
    // false - if present
    bool insert(int val) {
        //check present
        if (idx.count(val)) return false;
        //not present
        randSet.push_back(val);
        idx[val] = randSet.size() - 1;
        return true;
    }
    
    //remove val and return true - if not present
    // false - if present
    bool remove(int val) {
        //not present
        if (!idx.count(val)) return false;
        //present - remove the val from idx and update the randSet using tail
        int tail = randSet.back();
        randSet[idx[val]] = tail; // remove val using tail
        randSet.pop_back(); // remove tail from vector

        idx[tail] = idx[val]; // update tail idx for new position.
        idx.erase(val); // remove val from idx

        return true;
    }
    
    // return a random val
    int getRandom() {
        return randSet[rand() % randSet.size()];
    }
};

// TC: insert O(1) avg, remove O(1) avg, getRandom O(1)
// SC: O(N+N) = O(2N)

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */