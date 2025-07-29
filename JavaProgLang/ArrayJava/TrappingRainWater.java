import java.util.*;
public class TrappingRainWater{
    public static int trap(int height[]){
        //calculate left max boundary
        int n=height.length;
        int leftMax[]=new int[n];
        leftMax[0]=height[0];
        for(int i=1;i<n;i++){
            leftMax[i]=Math.max(leftMax[i-1],height[i]);
        }
        //calculate right max boundary
        //loop
        //waterlevel=min(leftmax,rightmax)
        //trappedWater=waterLevel-height[i]
            return 0;
    }
    public static void main(String args[]){
        int height[]={4,2,0,6,3,2,5};
    }
}