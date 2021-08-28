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
int countNode(node *head)
{
    //TODO
    node *temp = head;
    int i = 0;
    while (temp)
    {
        i++;
        temp = temp->next;
    }
    return i;
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
    cout << endl;
    cout << countNode(head);
    return 0;
}
