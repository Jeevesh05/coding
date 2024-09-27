// Java Program for class example

class Node {
    int data;
    Node nextNode;

    Node(int data) {
        this.data = data;
        this.nextNode = null;
    }

    Node(int data, Node nextNode) {
        this.data = data;
        this.nextNode = nextNode;
    }

};

class linkedList {
    public static void printLL(Node head) {
        Node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.nextNode;
        }
    }

    public static Node reverse(Node head) {
        Node currNode = head;
        Node prevNode = null;
        Node forwaNode = null;
        while (currNode != null) {
            forwaNode = currNode.nextNode;
            currNode.nextNode = prevNode;
            prevNode = currNode;
            currNode = forwaNode;
        }
        return prevNode;
    }

    public static void main(String args[]) {
        Node head = new Node(5);
        head.nextNode = new Node(10);
        head.nextNode.nextNode = new Node(15);
        printLL(head);
        head = reverse(head);
        printLL(head);

    }
}
