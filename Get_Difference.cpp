#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while (cin >> val && val != -1)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    long long mx = head->val;
    long long mn = head->val;

    Node* temp = head;

    while (temp != NULL)
    {
        mx = max(mx, (long long)temp->val);
        mn = min(mn, (long long)temp->val);

        temp = temp->next;
    }

    cout << mx - mn << endl;

    return 0;
}