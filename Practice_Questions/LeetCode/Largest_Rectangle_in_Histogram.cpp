#include <bits/stdc++.h>   
using namespace std;

class Solution {
public:
    vector<int> findNextSmaller(vector<int> arr, int n) 
    {
        vector<int> nextSmallerElements(n);
        int next;
        stack<int> s;
        for(int i=n-1; i>=0; i--)
        {
            while( (!s.empty()) && (arr[s.top()]>=arr[i])) s.pop();
            nextSmallerElements[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        return nextSmallerElements;
    } 

    vector<int> findPrevSmaller(vector<int> arr, int n) 
    {
        vector<int> prevSmallerElements(n);
        int next;
        stack<int> s;
        for(int i=0; i<n; i++)
        {
            while( (!s.empty()) && (arr[s.top()]>=arr[i])) s.pop();
            prevSmallerElements[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        return prevSmallerElements;
    } 

    int largestRectangleArea(vector<int>& heights) {
        int i;
        int n = heights.size();
        int maxArea = 0;
        int area;
        vector<int> nextSmaller(n);
        vector<int> prevSmaller(n);
        
        nextSmaller = findNextSmaller(heights, n);
        prevSmaller = findPrevSmaller(heights, n);

        for(i=0; i<n; i++)
        {
            area = heights[i]*(nextSmaller[i]-prevSmaller[i]-1);
            maxArea = max(maxArea, area);
        }        
        return maxArea;
    }
    
};

// Driver code 
int main() 
{ 
    vector<int> height = { 2,1,5,6,2,3 }; 
    Solution sln;
  
    // Function call 
    cout << "Maximum area is " << sln.largestRectangleArea(height); 
    return 0; 
}
