void miniMaxSum(vector<int> arr) { 
    long long n =arr.size();
    long long sum=0;
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
      sum = sum+arr[i];
      mx = max(mx , arr[i]);
      mn = min(mn , arr[i]);
    }
    
    cout<<sum-mx<<" "<<sum-mn<<endl;
    return ;
      
}