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
int searchLinkedList(node *head, int key)
{
    // TODO
    node *temp = head;
    int i = 0;
    while (temp->next)
    {
        if (temp->data == key)
            return i;
        i++;
        temp = temp->next;
    }
    if (temp->data == key)
        return i;
    return -1;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    int m;
    cin >> m;
    cout << searchLinkedList(head, m);
    return 0;
}
