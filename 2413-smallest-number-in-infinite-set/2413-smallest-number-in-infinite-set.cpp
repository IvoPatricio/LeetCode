class SmallestInfiniteSet {
private:
    std::set<int> removed;
    int number;
public:
    SmallestInfiniteSet() : number(1) {
    }
    
    int popSmallest() {
        if (!removed.empty()) 
        {
            int current = *removed.begin();
            removed.erase(removed.begin());
            return current;
        }
        return number++;
    }
    
    void addBack(int num) {
         if (num < number) {
            removed.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */