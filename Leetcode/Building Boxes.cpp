class Solution {
public:
    int minimumBoxes(int n) {
        int i = 1;
        int sum = 1;
        int no = 2;
        
        while(sum<n)
        {
            i+=no;
            sum+=i;
            no++;
        }
        //cout<<i<<" "<<no;
        if(sum==n)
        {
            return i;
        }
        
        sum-=i;
        
        int k=0;
        while(sum<n)
        {
            k++;
            sum+=k;
        }
        return k+i-no+1;
    }
};
