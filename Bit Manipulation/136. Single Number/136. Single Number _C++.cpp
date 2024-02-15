class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int > times;

        for(int i=0;i<nums.size();i++){
            if(times.find(nums[i])!=times.end()){
                times[nums[i]]++;
            }else{
                times[nums[i]]=1;
            }
        }

        for(auto iter=times.begin();iter!=times.end();iter++){
            if(iter->second==1)return iter->first;
        }
        return 0;

    }
};
