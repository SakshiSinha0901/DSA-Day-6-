// VECTOR METHOD
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:    
//     int singleNumber(vector<int>& nums){
//         //function coompleete karna hai
//         int ans = 0;
//         //esse vector ki length nikal jati hai
//         int n = nums.size();
//         for (int i=0; i<n ; i++){
//             ans = ans^nums[i];
//         }
//         // return the answer
//         return ans ;

//     }
// }; 

// //Taken for running the code
// int main() {
//     vector<int> nums = {2, 2, 1};  // Example input
//     Solution sol;
//     cout << "The single number is: " << sol.singleNumber(nums) << endl;
//     return 0;
// }

//ARRAY METHOD
#include <iostream>
using namespace std;

int findUniqueNumber(int arr[] , int n){
    int ans =0;
    for (int i = 0; i<n; i++){
        ans = ans^ arr[i];
    }
    return ans;
}

int main(){
    int arr[]= {2,4,1,4,1};
    int size = 5;
    int ans = findUniqueNumber(arr,size);
    cout << "The single number is: "<< ans << endl;
}
