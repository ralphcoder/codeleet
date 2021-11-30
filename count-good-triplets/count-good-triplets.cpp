class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
       int count=0;
        for(int i=0;i<arr.size()-2;i++)
        {
            for(int j=i+1;j<arr.size()-1;j++)
            {
                if(abs(arr[i] - arr[j]) <= a)
                {
                    for(int k=j+1;k<arr.size();k++)
                    {
                        if (abs(arr[j] - arr[k]) <= b && abs(arr[k] - arr[i]) <= c)
                        count++;
                    }
                }
            }
        }
               
        return count;
    }
};

 // if(abs(arr[i] - arr[i+1]) <= a && abs(arr[i+1] - arr[i+2]) <= b && abs(arr[i] - arr[i+2]) <= c)