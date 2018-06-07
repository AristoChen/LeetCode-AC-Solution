/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 35.48 %
    Runtime : 4 ms
    Testcase : 12 / 12 passed
    Ranking : Your runtime beats 77.02 % of cpp submissions.
}
*/

// Below is the interface for Iterator, which is already defined for you.
// **DO NOT** modify the interface for Iterator.
class Iterator {
    struct Data;
	Data* data;
public:
	Iterator(const vector<int>& nums);
	Iterator(const Iterator& iter);
	virtual ~Iterator();
	// Returns the next element in the iteration.
	int next();
	// Returns true if the iteration has more elements.
	bool hasNext() const;
};


class PeekingIterator : public Iterator {
public:
    vector<int> temp;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    temp = nums;
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return temp.front();
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int answer = temp.front();
        temp.erase(temp.begin());
        return answer;
	}

	bool hasNext() const {
	    return !temp.empty();
	}
};