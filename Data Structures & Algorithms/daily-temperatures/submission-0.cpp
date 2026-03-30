class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
    vector<int> result(n, 0);
    stack<int> s; 

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[i] > arr[s.top()]) {
            int topIndex = s.top();
            s.pop();
            result[topIndex] = i - topIndex; 
        }
        s.push(i); 
    }

    // 1 
    return result;
    }
};
