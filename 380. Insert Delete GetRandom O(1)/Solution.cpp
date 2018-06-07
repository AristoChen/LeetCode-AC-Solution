/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 40.06 %
    Runtime : 142 ms
    Testcase : 18 / 18 passed
    Ranking : Your runtime beats 4.16 % of cpp submissions.
}
*/

class RandomizedSet {
public:
    map<int,int> temp;
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(temp.find(val) != temp.end())
            return false;
        else
        {
            temp[val] = 1;                
            return true;
        }
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(temp.find(val) == temp.end())
            return false;
        else
        {
            temp.erase(val);
            return true;
        }
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        map<int,int>::iterator it = temp.begin();
        advance(it, rand()%(temp.size()));
        return it->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */