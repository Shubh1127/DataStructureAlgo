import java.util.*;
public class ReverseOfString {
    public static String reverseString(String str){
        Stack<Character> s =new Stack<>();
        int idx=0;
        while(idx< str.length()){
            s.push(str.charAt(idx));
            idx++;
        }
        StringBuilder newStr=new StringBuilder("");
        while(!s.isEmpty()){
            char curr=s.pop();
            newStr.append(curr);
        }
        return newStr.toString();
    }
    public static void main(String args[]){
        String str="hello";
        String result=reverseString(str);
        System.out.println("Original String: "+str);
        System.out.println("Reversed String: "+result);

    }
}
