#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        { // linked list is empty
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // after the loop temp is pointing to the last node
        temp->next = new_node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
/**
 * Time Complexity=O(m+n) where the m is length of 1st LL and n is length of 2nd LL
 */
Node* mergeTwoLinkedListInSortedOrder(Node *&head1, Node *&head2)
{  // please give the linked list in sorted manner
    Node *dummyheadNode = new Node(-1);
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *ptr3 = dummyheadNode;
    while (ptr1 && ptr2)
    { // if both tghe condition is true
        if (ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    if (ptr1 != NULL)
    { // if any one of the linked list is not equal to null
        ptr3->next = ptr1;
    }
    else
    {
        ptr3->next = ptr2;
    }
    return dummyheadNode->next;
}
int main()
{
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(7);
    ll1.insertAtTail(9);
    ll1.insertAtTail(11);
    ll1.display();

    LinkedList ll2;
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.insertAtTail(6);
    ll2.insertAtTail(8);
    ll2.display();
    LinkedList ll3;
    ll3.head = mergeTwoLinkedListInSortedOrder(ll1.head, ll2.head);
    ll3.display();
}