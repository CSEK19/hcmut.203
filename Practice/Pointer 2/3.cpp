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
    if (n > 0)
    {
        node *head = createLinkedList(n);
        print(head);
    }
    else
    {
        cout << "Invalid n" << endl;
    }
    return 0;
}
