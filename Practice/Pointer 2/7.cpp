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
void mergeList(node *head1, node *head2)
{
    // TODO
    node *temp = head1;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head2;
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
    int m;
    cin >> m;
    node *head1 = createLinkedList(m);
    mergeList(head, head1);
    print(head);
    return 0;
}
