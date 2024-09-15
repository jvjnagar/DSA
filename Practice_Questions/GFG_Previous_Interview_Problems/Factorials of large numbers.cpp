#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        vector<int> res;
        res.push_back(1);  // Initialize result as 1

        // Multiply numbers from 2 to N
        for (int x = 2; x <= N; x++) {
            multiply(res, x);
        }

        // Result is already stored in the correct order
        int n =res.size();
        for (int i = 0; i < n / 2; ++i) {
            int temp = res[i];
            res[i] = res[n - i - 1];
            res[n - i - 1] = temp;
        }
        return res;
    }

    void multiply(vector<int>& res, int x) {
        int carry = 0;  // Initialize carry

        // Multiply current number with x
        for (int i = 0; i < res.size(); i++) {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;  // Store last digit of product
            carry = prod / 10;  // Keep the carry
        }

        // Handle remaining carry
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
