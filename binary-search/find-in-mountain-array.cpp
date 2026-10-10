/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int Peakfind(MountainArray &mountainArr){
        int n=mountainArr.length();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid==0)
            mid++;
            if(mid==n-1)
            mid--;
            int v=mountainArr.get(mid);
            int z=mountainArr.get(mid+1);
            if(v>mountainArr.get(mid-1) && v>mountainArr.get(mid+1))
            return mid;
            else if(v<z)
            low=mid+1;
            else
            high=mid-1;
        }
        return 0;
    }
    int BinarySearch(MountainArray &mountainArr,int x,int low,int high){
        int z=10001;
        while(low<=high){
            int mid=(low+high)/2;
            int v=mountainArr.get(mid);
            if(v==x)
            return mid;
            if(v<x)
            low=mid+1;
            else
            high=mid-1;
        }
        return z;
    }
    int BinarySearchDesc(MountainArray &mountainArr,int x,int low,int high){
        int z=10001;
        while(low<=high){
            int mid=(low+high)/2;
            int v=mountainArr.get(mid);
            if(v==x)
            return mid;
            if(v>x)
            low=mid+1;
            else
            high=mid-1;
        }
        return z;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int peak=Peakfind(mountainArr);
        int x=min(BinarySearch(mountainArr,target,0,peak),BinarySearchDesc(mountainArr,target,peak,n-1));
        if(x==10001)
        x=-1;
        return x;

    }
};