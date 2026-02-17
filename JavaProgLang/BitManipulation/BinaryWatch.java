public class BinaryWatch {
    public List<String> readBinaryWatch(int num) {
        List<String> res=new ArrayList<>();
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(Integer.bitCount(i)+Integer.bitCount(j)==num){
                    res.add(String.format("%d:%02d",i,j));
                }
            }
        }
        return res;
    }
    public static void main(String args[]){
        BinaryWatch obj=new BinaryWatch();
        System.out.println(obj.readBinaryWatch(1));
    }
}