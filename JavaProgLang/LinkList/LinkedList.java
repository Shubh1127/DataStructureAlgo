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
    static Scanner s=new Scanner(System.in);
   public static Node head;
   public static Node tail;

   public static Node addFirst(Node head){
    System.out.println("Enter data to add at first: ");
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
    int data = s.nextInt();
    Node newNode = new Node(data);

    if(head == null){
        head = tail = newNode;
        print(head);
        return head;
    }

    tail.next = newNode;
    tail = newNode;
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
   //add at mid
   public static Node add_at_mid(Node head){
    
    if(head==null){
        return  addFirst(head);
    }
    print(head);
    System.out.println("Enter the data after which you want to add new node: ");
    int afterdata=s.nextInt();
    
    
    Node temp=head;
    while(temp!=null && temp.data!=afterdata){
        temp=temp.next;
    }
    if(temp==null){
        System.out.println("Node with data "+afterdata+" not found.");
        return head;
    }
    System.out.println("Enter data to add at mid: ");
    int data=s.nextInt();
    Node newNode=new Node(data);

    newNode.next=temp.next;
    temp.next=newNode;

    if(temp==tail){
        tail=newNode;
    }
    print(head);
    return head;
   }

   public static Node removeFirst(Node head){
    if(head==null){
        System.out.println("List is empty");
        return head;
    }else if(head.next==null){
        head=tail=null;
    }else{
        head=head.next;
    }
    print(head);
    return head;
    
   }
   public static Node removeLast(Node head){
    if(head==null){
        return removeFirst(head);
    }else if(head.next==null){
        return removeFirst(head);
    }else{
        Node temp=head;
        Node prev=null;
        while(temp.next!=null){
            prev=temp;
            temp=temp.next;
        }
        prev.next=null;
        tail=prev;
        print(head);
        return head;
    }
    }
    //remove at mid
    public static Node remove_at_mid(Node head){
    if(head == null){
        System.out.println("List is empty");
        return head;
    }

    if(head.next == null){
        return removeFirst(head);
    }

    print(head);
    System.out.println("Enter the data after which you want to remove node: ");
    int afterdata = s.nextInt();

    Node temp = head;
    while(temp != null && temp.data != afterdata){
        temp = temp.next;
    }

    if(temp == null || temp.next == null){
        System.out.println("Invalid operation");
        return head;
    }

    if(temp.next == tail){
        tail = temp;
    }

    temp.next = temp.next.next;

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
    System.out.println("1. Add First\n2. Add Last\n3. Add at Mid\n4. Remove First\n5. Remove Last\n6. Remove at Mid\n7. Print List\n8. Exit");
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
            case 4:head=removeFirst(head);
                break;
            case 5:head=removeLast(head);
                break;
            case 6:head=remove_at_mid(head);
                break;
            case 7:print(head);
                break;
            case 8:System.out.println("Exiting...");
                System.exit(0);
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }
    }
   }
}