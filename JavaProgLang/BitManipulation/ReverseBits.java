 public class ReverseBits {
    public int reverseBits(int n) {
        int ReverseNumber=0;
        for(int i=0;i<32;i++){
            int EndTerm=n&1;
            ReverseNumber=ReverseNumber*2+EndTerm;
            n=n>>1;
        }
        return ReverseNumber;
    }
    public static void main(String args[]){
        ReverseBits solution=new ReverseBits();
        int n=43261596;
        int result=solution.reverseBits(n);
    }
}