import java.util.*;
public class DoublyList{
    public class Node{
        int data;
        Node next;
        Node prev;
        public Node(int data){
            this.data=data;
            this.prev=null;
            this.next=null;
        }
    }
    Scanner s=new Scanner(System.in);
    public static Node head;
    public Node tail;

    public Node addAtFirst(Node head){
        System.out.print("Enter the Node to add at first: ");
        int data = s.nextInt();
        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
            print(head);
            return head;
        }
        newNode.next = head;
        head.prev = newNode;
        head = newNode;
        print(head);
        return head;
    }

    public Node addAtLast(Node head){
        if(head==null){
            return addAtFirst(head);
        }
        System.out.print("Enter the Node to insert at last: ");
        int data=s.nextInt();
        Node newNode=new Node(data);
        tail.next=newNode;
        newNode.prev=tail;
        tail=newNode;
        newNode.next=null;
        print(head);
        return head;
    }

    public Node addAtMid(Node head){
        if(head==null){
            return addAtFirst(head);
        }
        else if(head.next==tail){
            return addAtLast(head);
        }
        System.out.print("Enter the Node after which you want to insert the new Node: ");
        int afterData=s.nextInt();
        Node temp=head;
        while(temp!=null && temp.data!=afterData){
            temp=temp.next;
        }
        if(temp==null){
            System.out.println("Node not found");
            return head;
        }
        System.out.print("Enter the data which you want to insert: ");
        int data=s.nextInt();
        Node newNode=new Node(data);
        newNode.next=temp.next;
        temp.next=newNode;
        newNode.prev=temp;
        if(temp==tail){
            tail=newNode;
        }
        print(head);
        return head;
    }
      public  void print(Node head){
        Node temp=head;
        System.out.print("head->");
        while(temp!=null){
            System.out.print("<-["+temp.data+"]"+"->");
            temp=temp.next;
        }
        System.out.print("<-tail");
        System.out.println();
    }
    public static void main(String args[]){
        Scanner n=new Scanner(System.in);
        System.out.println("============================================");
        System.out.println("|       Welcome to Linked List Program      |");
        System.out.println("============================================");
        System.out.println("|1. Add at First                            |");
        System.out.println("|2. Add at Last                             |");
        System.out.println("|3. Add at Mid                              |");
        System.out.println("|4. print                                   |");
        System.out.println("|5. Exit                                    |");
        System.out.println("============================================");
        System.out.print("Enter your choice: ");
        int choice=n.nextInt();
        DoublyList list=new DoublyList();
        while(choice>0 && choice<6){
            switch(choice){
                case 1:
                    head=list.addAtFirst(head);
                    break;
                case 2:
                    head=list.addAtLast(head); 
                    break;
                case 3:head=list.addAtMid(head);
                    break;
                case 4:list.print(head);
                    break;
                case 5:System.out.println("Thank you for using the program");
                    System.exit(0);
            }
            System.out.println("Enter your choice: ");
            choice=n.nextInt();
        }
    }  
    
}