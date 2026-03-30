class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        vector<int>vec(2);
        while(i < j )
            {
                if(numbers[i] + numbers[j] == target )
                {
                    vec[0] = i+1;
                    vec[1] = j+1;
                    break;
                }
                else
                {
                    if(numbers[i] + numbers[j] > target)
                        j--;
                    else
                        i++;    
                }

            }

            return vec;
    }
};
