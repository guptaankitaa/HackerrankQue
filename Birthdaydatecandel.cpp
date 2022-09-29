int birthdayCakeCandles(vector<int> candles) {
   int n = candles.size();
   int count = 0;
   sort(candles.begin(),candles.end());
   for(int i=0;i<n;i++)
   {
       if(candles[n-1]==candles[i])
       {
           count++;
       }
   }
   return count;
}
