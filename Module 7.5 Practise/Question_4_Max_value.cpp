#include <bits\stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val) // Tail nelam
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void Print_Linked_List(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int find_Maximum_value(Node *head) // Max vlaue khujlam
{
    int max_value = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > max_value)
        {
            max_value = tmp->val;
        }
        tmp = tmp->next;
    }
    return max_value;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    int Sorboccho_value = find_Maximum_value(head);
    cout << Sorboccho_value << " ";
    return 0;
}