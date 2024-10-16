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
    public static int DectoBin(int n){
        int pow=0,rem,BinaryNum=0;
        while(n>0){
            rem=n%2;
            BinaryNum=BinaryNum+(rem*(int)Math.pow(10,pow));
            pow++;
            n/=2;
        }
        return BinaryNum;
    }
    public static void main(String args[]){
        // binary to decimal
        System.out.println("Enter a binary number");
        Scanner s=new Scanner(System.in);
        int binNum=s.nextInt();
        System.out.println("Binary equivalent of "+binNum+" is :"+BinToDec(binNum));


        //Decimal to binary
        System.out.println("Enter a Decimal number ");
        int Decum=s.nextInt();
        System.out.println("Decimal equivalent of "+Decum+" is : "+DectoBin(Decum));
    }
}
