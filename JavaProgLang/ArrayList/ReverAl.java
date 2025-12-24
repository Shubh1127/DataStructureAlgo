import java.util.ArrayList;
public class ReverAl {
    public static void main(String args[]){
        ArrayList<Integer> list=new ArrayList<>();
        //Add operation
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);

       

        //Rever of an ArrayList
        for(int i=list.size()-1;i>=0;i--){
            System.out.print(list.get(i)+" ");

        }
        // System.out.println();
    }
}
