import java.util.*;

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

   public static Node addFirst(Node head){
    System.out.println("Enter data to add at first: ");
    Scanner s=new Scanner(System.in);
    int data=s.nextInt();
    Node newNode=new Node(data);
    if(head==null){
        head=tail=newNode;
        print(head);
        return head;
    }
    newNode.next=head;
    head=newNode;
    print(head);
    return head;
   }
   public static Node addLast(Node head){
    System.out.println("Enter data to add at last: ");
    Scanner s=new Scanner(System.in);
    int data=s.nextInt();
    Node newNode=new Node(data);
    if(head==null){
        addFirst(head);
        return head;
    }
    tail.next=newNode;
    tail=newNode;
    print(head);
    return head;
   }
   public static void print(Node head){
    Node temp=head;
    System.out.print("[Head]->");
    while(temp!=null){
        System.out.print("["+temp.data+"]->");
        if(temp.next==null){
            System.out.print("[Tail]");
        }
        temp=temp.next;
    }
    System.out.println();
   }
   public static Node add_at_mid(Node head){
    
    if(head==null){
        return  addFirst(head);
    }else if(head.next==null){
        return addLast(head);
    }
    print(head);
    System.out.println("Enter the data after which you want to add new node: ");
    Scanner s=new Scanner(System.in);
    int afterdata=s.nextInt();
    System.out.println("Enter data to add at mid: ");
    int data=s.nextInt();
    Node newNode=new Node(data);
    Node temp=head;
    while(temp!=null && temp.data!=afterdata){
        temp=temp.next;
    }
    newNode.next=temp.next;
    temp.next=newNode;
    print(head);
    return head;
   }
   public static void main(String args[]){
    // LinkedList ll=new LinkedList();
    // ll.addFirst(2);
    // ll.addFirst(1);
    // ll.addLast(3);
    int n;
    System.out.println("Linked List Operations:");
    System.out.println("1. Add First\n2. Add Last\n3. Add at Mid\n4. Print List");
    Scanner s=new Scanner(System.in);
    while(true){
        System.out.println("Enter your choice: ");
        n=s.nextInt();
        // System.out.println("Enter data: ");
        // int data=s.nextInt();
        switch (n) {
            case 1:head=addFirst(head);
                break;
            case 2:head=addLast(head);
                break;
            case 3:head=add_at_mid(head);
                break;
            case 4:print(head);
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }
    }
   }
}