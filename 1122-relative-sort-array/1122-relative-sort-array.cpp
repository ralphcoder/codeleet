class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int a[1001]={0};
        for(int i:arr1)a[i]++;
        int ch=0;
        for(int i:arr2)
            while(a[i]--)arr1[ch++]=i;
        
        for(int i=0;i<1001;i++)if(a[i]>0)while(a[i]--)arr1[ch++]=i;
        return arr1;
    }
};