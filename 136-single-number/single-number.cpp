class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        //better approch using hash map
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
       //find the number that appears only once 
       for(auto x:mp) 
       {
        if(x.second ==1)
        return x.first;
       }
        return -1;
    }
};