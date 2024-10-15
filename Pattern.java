public class Pattern {
    public static void main(String args[]){


        //star
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
                //add j || i in place of * to print number
            }
            System.out.println();
        }
        //INVERTED star
        for(int i=5;i>=1;i--){
            for(int j=1;j<=i;j++){
                System.out.print("*");
                //add j || i in place of * to print number
            }
            System.out.println();
        }
        //character pyramid pattern
        char ch='A';
        for(int i=1;i<=4;i++){
            for(int j=1;j<=i;j++){
                System.out.print(ch);
                ch++;
            }
            System.out.println();
        }
    }
}
