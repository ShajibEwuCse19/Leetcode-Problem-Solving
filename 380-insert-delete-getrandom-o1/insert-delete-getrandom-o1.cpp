class RandomizedSet {
    unordered_set<int> st;
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        return st.insert(val).second; // TC: O(1) avg
    }
    
    bool remove(int val) {
        return st.erase(val) > 0;     // TC: O(1) avg
    }
    
    int getRandom() {
        auto it = st.begin();
        advance(it, rand() % st.size()); // TC: O(N) — linear iterator walk
        return *it;
    }
};

// TC: insert O(1) avg, remove O(1) avg, getRandom O(N)
// SC: O(N)

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */