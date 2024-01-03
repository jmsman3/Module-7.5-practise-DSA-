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
void insert_at_tail(Node *&head, Node *&tail, int val)
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
void Print_Recursion(Node *n) // 27 theke 40 Number line Linkde list Reverse korar function
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    Print_Recursion(n->next);
}
void Print_Reverse(Node *n)
{
    if (n == NULL)
        return;
    Print_Reverse(n->next);
    cout << n->val << " ";
}
// void Print_Linked_List(Node *head)   //dorkar nai ai code er kaaj , print recursion kore dai
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }
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
    Print_Recursion(head);
    cout << endl;
    Print_Reverse(head);
    return 0;
}