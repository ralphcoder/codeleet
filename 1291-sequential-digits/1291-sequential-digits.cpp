class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int t=0;
        int a=log10(low)+1;int b=log10(high)+1;
       
        while(a<=b){
            vector<int>temp;
            for(int i=1;i<=a;i++)temp.push_back(i);
            while(temp.back()<10)
            {   t=0;
                for(int i=0;i<a;i++)
                { 
                    t=t*10+temp[i];temp[i]++;
                }
             if(t<=high && t>=low)ans.push_back(t);
            }
            a++;
        }
        
        return ans;
    }
};