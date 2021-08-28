#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkedList(int n)
{
    //TODO
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
void replace(node *head, int position, int value)
{
    //TODO
    node *temp = head;
    int i;
    while (position != i && temp)
    {
        i++;
        temp = temp->next;
    }
    if (temp != NULL)
        temp->data = value;
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
    int pos, val;
    cin >> pos >> val;
    replace(head, pos, val);
    print(head);
    return 0;
}
