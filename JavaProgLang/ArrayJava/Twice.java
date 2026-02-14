
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct
import java.Util.*;
public class Twice {
    public static boolean containsDuplicate(int nums[]){
      HashSet<Integer> set=new HashSet<>();
      for(int i=0;i<nums.length;i++){
        if(set.contains(nums[i])){
            return true;
        }
        set.add(nums[i]);
      }
        return false;
    }
    public static void main(String agrs[]){
        int nums[]={1,2,3,1};
        System.out.println(containsDuplicate(nums));
    

    }
}