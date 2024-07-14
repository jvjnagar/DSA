   
//brute-Force approach
vector<int> findNextSmaller(vector<int> arr, int n) 
    {
        vector<int> nextElements(n);
        int next;
        for(int i=n-1; i>=0; i--)
        {
            next=-1;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]>arr[j])
                {
                    next = arr[j];
                    break;
                }
            }
            nextElements[i] = next;
        }
        return nextElements;
    } 
