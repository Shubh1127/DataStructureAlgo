import java.util.*;

public class CircularList {
    public class Node{
        int data;
        Node next;
        public Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public static Node head;
    Scanner s=new Scanner(System.in);

    public Node addAtFirst(Node head){
        System.out.println("Enter the Node to add at first: ");
        int data=s.nextInt();
        Node newNode=new Node(data);
        if(head==null){
            head=newNode;
            newNode.next=head;
            print(head);
            return head;
        }
        Node temp=head;
        while(temp.next!=head){
            temp=temp.next;
        }
        temp.next=newNode;
        newNode.next=head;
        head=newNode;
        print(head);
        return head;
    }
    public Node addAtLast(Node head){

        if(head==null){
            return addAtFirst(head);
        }
        System.out.print("Enter the data to add at last: ");
        int data=s.nextInt();
        Node newNode=new Node(data);
        Node temp=head;
        do{
            if(temp.next==head){
                break;
            }
            temp=temp.next;
        }while(temp!=head);
        newNode.next=temp.next;
        temp.next=newNode;
        print(head);
        return head;
    }
    public Node addAtMid(Node head){
        if(head==null){
            return addAtFirst(head);
        }else if(head.next==head){
            return addAtLast(head);
        }else{
            print(head);
            System.out.print("Enter the node after which you want to insert the Node: ");
            int afterNode=s.nextInt();
            Node temp=head;
            do{
                if(temp.data==afterNode)
                    break;
                temp=temp.next;
            }while(temp!=head);
            System.out.print("Enter the data which you want to insert: ");

            int data=s.nextInt();
            if(temp.data!=afterNode){
                System.out.println("Node is not found");
                return head;
            }
            Node newNode=new Node(data);

            newNode.next=temp.next;
            temp.next=newNode;
            
            print(head);
            return head;

        }
    }
    public static void print(Node head){
        if(head==null){
            System.out.println("List is empty");
            return;
        }
        Node temp=head;
        System.out.print("[Head]->");
        do{
            System.out.print("["+temp.data+"]->");
            temp=temp.next;
        }while(temp!=head);
        System.out.println("[head]");
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
        CircularList list=new CircularList();
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