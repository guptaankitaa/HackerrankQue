vector<int> compareTriplets(vector<int> a, vector<int> b) {
   vector<int>v;
   int a1=0,a2=0;
   for(int i=0;i<a.size();i++)
   {
       if (a[i]>b[i])
       {
           a1++;
       }
       if (a[i]<b[i])
       {
           a2++;
       }
   }
   v.push_back(a1);
   v.push_back(a2);
   return v;
}
