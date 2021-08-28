#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkList(int n)
{
    // TO DO
    node *head = new node();
    cin >> head->data;
    node *temp = head;
    for (int i = 1; i < n; i++)
    {
        node *newNode = new node();
        cin >> newNode->data;
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}
bool isEqual(node *head1, node *head2)
{
    // TO DO
    node *temp1 = head1;
    node *temp2 = head2;
    while (temp1 && temp2)
    {
        if (temp1->data != temp2->data)
            return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 == NULL && temp2 != NULL)
        return false;
    if (temp1 != NULL && temp2 == NULL)
        return false;
    return true;
}
int main()
{
    int n = 0;
    cin >> n;
    node *head1 = createLinkList(n);
    int m = 0;
    cin >> m;
    node *head2 = createLinkList(m);
    cout << isEqual(head1, head2) << endl;
    return 0;
}
