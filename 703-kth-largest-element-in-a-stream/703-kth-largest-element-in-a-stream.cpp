class KthLargest {
public:
     priority_queue<int,vector<int>,greater<int>> minh;
    int k1;
    KthLargest(int k, vector<int>& nums) {
        k1=k;
        for(auto i:nums)
        {  minh.push(i);
            if(minh.size()>k1)minh.pop();
        }
    }
    
    int add(int val) {
        minh.push(val);
            if(minh.size()>k1)minh.pop();
        return minh.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */