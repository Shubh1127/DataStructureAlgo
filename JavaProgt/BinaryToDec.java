import java.util.*;
public class BinaryToDec {
    public static int BinToDec( int binNum){
        int pow=0,dec=0,lastDigit,DecNum=0;
        while(binNum>0){
            lastDigit=binNum%10;
            DecNum=lastDigit+(lastDigit*(int)Math.pow(2,pow));
            pow++;
            binNum/=10;
        }
        return DecNum;
    }
    public static void main(String args[]){
        System.out.println("Enter a binary number");
        Scanner s=new Scanner(System.in);
        int binNum=s.nextInt();
        System.out.println(BinToDec(binNum));
    }
}
