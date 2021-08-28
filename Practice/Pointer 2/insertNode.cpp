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
node *insertNode(node *head, node *newNode, int position)
{
    // TO DO
    node *temp = head;
    if (position > 0)
    {
        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            int i = 1;
            while (i < position - 1)
            {
                if (temp->next == NULL)
                    break;
                temp = temp->next;
                i++;
            }
            if (temp->next != NULL)
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            else
            {
                temp->next = newNode;
                newNode->next = NULL;
            }
        }
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
    node *head = createLinkedList(n);
    node *newNode = new node();
    cin >> newNode->data;
    int position = 0;
    cin >> position;
    head = insertNode(head, newNode, position);
    print(head);
    return 0;
}
