class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        int sum=0;
        vector<int>ans;
        while(i<j){
            sum+=numbers[i]+numbers[j];
            if(sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }else if(sum>target){
               sum-=numbers[j];
               sum-=numbers[i];
               j--;
            }else{
                sum-=numbers[i];
                sum-=numbers[j];
                i++;
            }
        }
        return ans;
    }
};
