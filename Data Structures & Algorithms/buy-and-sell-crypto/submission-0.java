class Solution {
    public int maxProfit(int[] a) {

        int i,j,n,maxi=0;
        n=a.length;
        
        i=0;j=0;
        while(j<n)
        {
           if(a[i]==a[j])
           {
            j++;
           } 
           else if (a[i]>a[j])
           {
            i++;
           }
           else
           {
            maxi=Math.max(maxi,a[j]-a[i]);
            j++;
           }
        }
        return maxi;
    }
}
