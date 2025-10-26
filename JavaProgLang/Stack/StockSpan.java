import java.util.*;
public class StockSpan {
    public static void stockspan(int stock[],int span[]){
        Stack<Integer> s=new Stack<>();
        span[0]=1;
        s.push(0); //index of first day
        for(int i=1;i<stock.length;i++){
            int currPrice=stock[i];
            while(!s.isEmpty() && currPrice>stock[s.peek()]){
                s.pop();
            }
            if(s.isEmpty()){
                span[i]=i+1;
            }else{
                int prevHighIndex=s.peek();
                span[i]=i-prevHighIndex;
            }
            s.push(i);
        }

    }
    public static void main(String args[]) {
        int stock[] = { 100, 80, 60, 70, 60, 85,100 };
        int span[] = new int[stock.length];
        stockspan(stock, span);
        int i = 0;
        while (i < span.length) {
            System.out.println(span[i]);
            i++;
        }
    }
}