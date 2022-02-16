class Solution {
public:
    double average(vector<int>& salary) {
        int min=INT_MAX,max=0;double sum=0;
        
        for(int i:salary){
            if(i<min)min=i;
            if(i>max)max=i;
            sum+=i;
        }
        return (sum-min-max)/(salary.size()-2);
    }
};