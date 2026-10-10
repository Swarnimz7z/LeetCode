class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int l=nums1.length;
        int l1=nums2.length;
        int n=l+l1;
        int arr[]=new int[n];
        double c=0;
        double c1=0.0;
        int k=0;
        for (int i=0;i<n;i++){
            if(i<l){
                arr[i]=nums1[i];
            }
            else{
                k=i-l;
                arr[i]=nums2[k];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>=arr[j+1]){
                    k=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=k;
                }
            }
        }
        if(n%2==1){
            c=arr[(n+1)/2-1];
            c1=c;
        }
        if(n%2==0){
            c=arr[(n/2)-1]+arr[n/2];
            c1=c/2;
        }
        return c1;
    }
}

            