#include <iostream>
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

int size_holo(Node *head)
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
void print_middle_elements(Node *head)
{
    Node *tmp = head;
    if (size_holo(head) % 2 != 0)
    {
        for (int i = 0; i < size_holo(head) / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " ";
    }
    else
    {
        for (int i = 0; i < (size_holo(head) / 2) - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
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
    print_middle_elements(head);
    return 0;
}
