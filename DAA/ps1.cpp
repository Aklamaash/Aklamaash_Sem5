#include <algorithm>    // std::min_element, std::max_element
#include <iostream>
#include <map>
#include <climits>
#include <string>
using namespace std;

int findMajorityElement(int arr[], int n) {
    map<int, int> nums;
    for (int i = 0; i < n; i++) {
        nums[arr[i]]++;
    }
    // int majorityCount = n / 2;
    // for (auto it = nums.begin(); it != nums.end(); it++) {
    //     if (it->second >= majorityCount) {
    //         return it->first;
    //     }
    // }
    // return -1;
    auto maxkey = std::max_element(nums.begin(), nums.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
    return maxkey->first;
}

int main() {
    int arr[] = {1,4,4, 3, 4, 1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majorityElement = findMajorityElement(arr, n);
    cout<<majorityElement;
    return 0;
}
