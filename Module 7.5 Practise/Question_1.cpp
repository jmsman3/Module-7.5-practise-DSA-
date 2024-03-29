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
int size_holo(Node *head) // Size Input neyechi
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_tail_1(Node *&head_1, Node *&tail_1, int v) // Prothom tail insert neyechi
{
    Node *newNode = new Node(v);
    if (head_1 == NULL)
    {
        head_1 = newNode;
        tail_1 = newNode;
        return;
    }
    tail_1->next = newNode;
    tail_1 = newNode;
}
void insert_at_tail_2(Node *&head_2, Node *&tail_2, int v) // Second tail insert Neyechi
{
    Node *newNode = new Node(v);
    if (head_2 == NULL)
    {
        head_2 = newNode;
        tail_2 = newNode;
        return;
    }
    tail_2->next = newNode;
    tail_2 = newNode;
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val;
    while (true)
    {
        // cout << "Enter Prothom Node List:- ";
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail_1(head_1, tail_1, val); // Prothom tial Call korlam
    }

    while (true)
    {
        // cout << "Enter Second Node List:- ";
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail_2(head_2, tail_2, val); // abar Second tail call korlam
    }
    if (size_holo(head_1) == size_holo(head_2))
    {
        // cout << "Your Linked List Size same:-"<< endl;
        cout << "YES" << endl;
    }
    else
    {
        // cout << "Your Linked List Size NOT same:-" << endl;
        cout << "NO" << endl;
    }

    return 0;
}