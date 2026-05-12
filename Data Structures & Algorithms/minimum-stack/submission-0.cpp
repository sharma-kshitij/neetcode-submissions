class MinStack {
public:
    vector<pair<int,int>> array;
    MinStack() {
    }
    
    void push(int val) {
        int stMin = array.empty() ? val : min(val,array.back().second);
        array.push_back({val,stMin});
    }
    
    void pop() {
        array.pop_back();
    }
    
    int top() {
        return array.back().first;
    }
    
    int getMin() {
        return array.back().second;
    }
};
