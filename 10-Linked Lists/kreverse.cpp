#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void inserttail(node *&head, int d)
{
    node *temp = new node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    node *last = head;
    while (last->next != NULL)
        last = last->next;
    last->next = temp;
    return;
}
node *reverse(node *head, int k)
{
    node *curr = head, *prev = NULL, *nxt = NULL;
    int count = 0;
    while (curr != NULL and count < k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        count += 1;
    }
    if (nxt != NULL)
    {
        head->next = reverse(nxt, k);
    }
    return prev;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    int n, d;
    int k;
    cin >> n;
    cin >> k;
    while (n--)
    {
        cin >> d;
        inserttail(head, d);
    }
    head =reverse(head, k);

    print(head);
    return 0;
}
