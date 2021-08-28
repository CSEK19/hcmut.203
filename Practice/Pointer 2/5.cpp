#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkedList(int n)
{
    // TO DO
    node *head = new node();
    cin >> head->data;
    head->next = NULL;
    node *temp = head;
    for (int i = 1; i < n; i++)
    {
        node *newNode = new node();
        cin >> newNode->data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}
node *evenThenOddLinkedList(node *head)
{
    //TODO
    node *newHead = NULL;
    node *temp = head;
    node *cur;
    bool first = false;
    while (temp)
    {
        if (temp->data % 2 == 0)
        {
            if (first == false)
            {
                newHead = new node();
                newHead->data = temp->data;
                cur = newHead;
                first = true;
            }
            else
            {
                node *newNode = new node();
                newNode->data = temp->data;
                newNode->next = NULL;
                cur->next = newNode;
                cur = newNode;
            }
        }
        temp = temp->next;
    }
    if (newHead != NULL)
    {
        temp = head;
        while (temp)
        {
            if (temp->data % 2 == 1)
            {
                node *newNode = new node();
                newNode->data = temp->data;
                newNode->next = NULL;
                cur->next = newNode;
                cur = newNode;
            }
            temp = temp->next;
        }
        return newHead;
    }
    return head;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    head = evenThenOddLinkedList(head);
    print(head);
    return 0;
}