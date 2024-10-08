#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;  // Store indices of the elements
    vector<int> result;  // Store the maximums of each window

    for (int i = 0; i < nums.size(); i++) {
        // Remove elements that are out of this window
        if (!dq.empty() && dq.front() < i - k + 1)
            dq.pop_front();

        // Remove elements from the back that are smaller than the current element
        while (!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();

        // Add the current element's index to the deque
        dq.push_back(i);

        // Once we have processed the first 'k' elements, we add the maximum to the result
        if (i >= k - 1)
            result.push_back(nums[dq.front()]);
    }

    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    
    vector<int> result = maxSlidingWindow(nums, k);

    // Output the result
    for (int num : result)
        cout << num << " ";
    
    return 0;
}
