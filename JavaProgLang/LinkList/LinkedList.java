

public class LinkedList{
   public static class Node{
    int data;
    Node next;

    public Node(int data){
        this.data=data;
        this.next=null;
    }
   }
   public static Node head;
   public static Node tail;

   public static void addFirst(int data){
    Node newNode=new Node(data);
    if(head==null){
        head=tail=newNode;
        print(head);
        return;
    }
    newNode.next=head;
    head=newNode;
    print(head);
   }
   public static void addLast(int data){
    Node newNode=new Node(data);
    if(head==null){
        addFirst(data);
        return;
    }
    tail.next=newNode;
    tail=newNode;
    print(head);
   }
   public static void print(Node head){
    Node temp=head;
    while(temp!=null){
        System.out.print(temp.data+" ");
        temp=temp.next;
    }
    System.out.println();
   }
   public static void main(String args[]){
    LinkedList ll=new LinkedList();
    ll.addFirst(2);
    ll.addFirst(1);
    ll.addLast(3);

   }
}