void plusMinus(vector<int> arr) {
int size=arr.size();
float p=0,n=0,z=0;
for(int i=0; i<size;i++)
{
    if(arr[i]>0)
    {
        p++;
    }
    else if(arr[i]<0)
    {
        n++;
    }
    else {
        z++;
    }
}
float a,b,c;
a=p/size;
b=n/size;
c=z/size;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}