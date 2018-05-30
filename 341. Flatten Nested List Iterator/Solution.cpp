/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 43.44 %
    Runtime : 17 ms
    Testcase : 44 / 44 passed
    Ranking : Your runtime beats 99.29 % of cpp submissions.
}
*/

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    stack<int> flatternList;
    NestedIterator(vector<NestedInteger> &nestedList) {
        flattern(nestedList);
    }
    
    void flattern(vector<NestedInteger>& nestedList)
    {
        for(int i = nestedList.size()-1; i >= 0; i--)
        {
            if(nestedList[i].isInteger())
                flatternList.push(nestedList[i].getInteger());
            else
                flattern(nestedList[i].getList());
        }
    }

    int next() {
        int answer = flatternList.top();
        flatternList.pop();
        return answer;
    }

    bool hasNext() {
        return !flatternList.empty();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */