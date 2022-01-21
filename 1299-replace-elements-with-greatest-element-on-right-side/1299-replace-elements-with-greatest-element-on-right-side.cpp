class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
           int j=arr[arr.size()-1];arr[arr.size()-1]=-1;
           for(int i=arr.size()-2;i>=0;i--)
           {   int t=arr[i];
               arr[i]=j;
               if(t>j)j=t;;
              }
               return arr;
               
    }
};