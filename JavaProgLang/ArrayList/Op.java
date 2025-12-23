import java.util.ArrayList;

//operations on ArrayList

public class Op {
    public static void main(String args[]){
        ArrayList<Integer> list=new ArrayList<>();
        //Add operation
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);

        //Get operation
        list.get(2);
        System.out.println(list);
        System.out.println(list.get(2));

        //Remove operation
        list.remove(2);
        System.out.println(list);

        //Set operation
        list.set(2,10);
        System.out.println(list);

        //Contains operation
        System.out.println(list.contains(10));
    }
}
