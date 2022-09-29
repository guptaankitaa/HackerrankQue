vector<int> gradingStudents(vector<int> grades) {
    int n=grades.size();
    for(int i=0;i<n;i++)
    {
        if(grades[i]>37)
        {
            int temp = grades[i];
            int val = temp % 10;
            if(val<5)
            {
                temp-=val;
                temp+=5;
            }
            else{
                int temp1=10-val;
                temp+=temp1;
            }
            if(temp - grades[i]<3)
               grades[i] = temp;
        }
    }
    return grades;
}