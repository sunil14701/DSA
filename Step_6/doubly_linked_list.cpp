#include <bits/stdc++.h>
using namespace std;

class List
{
public:
    int val;
    List *prev;
    List *next;

    List()
    {
        val = 0;
        prev = nullptr;
        next = NULL;
    }

    List(int val1, List *next1 = NULL, List *prev1 = NULL)
    {
        val = val1;
        next = next1;
        prev = prev1;
    }
};

List *arrayToDLL(vector<int> &vec)
{
    int size = vec.size();
    if (size == 0)
        return NULL;
    List *head = new List(vec[0]);
    List *mov = head;
    for (int i = 1; i < size; i++)
    {
        mov->next = new List(vec[i]);
        mov->next->prev = mov;
        mov = mov->next;
    }
    return head;
}

void print_list(List *head)
{
    List *temp = head;
    cout << "NULL <- ";
    while (temp)
    {
        cout << temp->val;
        if (temp->next != NULL)
            cout << " <-> ";
        temp = temp->next;
    }
    cout << "-> NULL" << endl;
}

List *deleteAtHead(List *head)
{
    if (head == NULL or head->next == NULL)
        return NULL;
    List *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}

List *deleteAtTailDLL(List *head)
{
    if (head == NULL or head->next == NULL)
        return NULL;
    List *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
    return head;
}

List *deleteKthElementDLL(List *head, int &pos)
{
    if (head == nullptr or head->next == nullptr)
        return NULL;
    int cnt = 0;
    List *temp = head;
    bool foundNode = false;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos)
        {
            foundNode = true;
            break;
        }
        temp = temp->next;
    }
    if (foundNode)
    {
        if (cnt == 1)
        {
            head = head->next;
            head->prev = NULL;
            delete temp;
            return head;
        }
        else
        {
            if (temp->next == NULL)
            {
                temp->prev->next = NULL;
            }
            else
            {
                temp->next->prev = temp->prev;
                temp->prev->next = temp->next;
            }
            delete temp;
        }
    }
    return head;
}

List *deleteNode(List *head, List *node)
{
    List *temp = head;

    // delete first node
    if (head == node)
    {
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }

    bool foundNode = false;
    while (temp != NULL)
    {
        if (temp == node)
        {
            foundNode = true;
            break;
        }
        temp = temp->next;
    }
    if (foundNode)
    {
        if (temp->next == NULL)
        {
            temp->prev->next = nullptr;
            delete temp;
        }
        else
        {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            delete temp;
        }
    }
    return head;
}

List *insertAtHeadDLL(List *head, int val)
{
    List *newNode = new List(val);
    if (head == nullptr)
        return newNode;

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

List *insertBeforeTailDLL(List *head, int val)
{
    List *newNode = new List(val);
    if (head == NULL)
        return newNode;

    // for single node
    if (head->next == NULL)
    {
        newNode->next = head;
        newNode->next->prev = newNode;
        head = newNode;
        return head;
    }
    List *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev = newNode;
    newNode->prev->next = newNode;
    return head;
}

List *insertbeforeKthNode(List *head, int &val, int &pos)
{
    List *newNode = new List(val);
    if (head == nullptr)
        return NULL;
    int cnt = 0;
    bool foundNode = false;
    List *temp = head;
    while (temp)
    {
        cnt++;
        if (cnt == pos)
        {
            foundNode = true;
            break;
        }
        temp = temp->next;
    }
    if (foundNode)
    {
        if (temp->prev == NULL)
        {
            newNode->next = temp;
            temp->prev = newNode;
            head = newNode;
        }
        else
        {
            newNode->next = temp;
            newNode->prev = temp->prev;
            temp->prev = newNode;
            newNode->prev->next = newNode;
        }
    }
    return head;
}

List *insertBeforeNode(List *head, List *node, int &val)
{
    if (head == NULL)
        return nullptr;
    List *temp = head;
    List *newNode = new List(val);
    while (temp)
    {
        if (temp == node)
        {
            if (temp->prev == NULL)
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            else
            {
                newNode->next = temp;
                newNode->prev = temp->prev;
                temp->prev = newNode;
                newNode->prev->next = newNode;
            }
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    // DLL - move in both the direction
    vector<int> vec = {12, 5, 8, 7};
    List *head = arrayToDLL(vec);
    // print_list(head);

    // deletion
    // 1. head
    // print_list(head);
    // List *newHead = deleteAtHead(head);
    // print_list(newHead);

    // 2. tail
    // print_list(head);
    // List *newHead = deleteAtTailDLL(head);
    // print_list(newHead);

    // 3. kth node
    // print_list(head);
    // int k = 5;
    // List *newHead = deleteKthElementDLL(head, k);
    // print_list(newHead);

    // 4. given node
    // print_list(head);
    // List *node = head->next->next->next->next;
    // List *newHead = deleteNode(head, node);
    // print_list(newHead);

    // insertion
    // 1. before head
    // print_list(head);
    // List *newHead = insertAtHeadDLL(head, 100);
    // print_list(newHead);

    // 2. before tail
    // print_list(head);
    // List *newHead = insertBeforeTailDLL(head,100);
    // print_list(newHead);

    // 3. Kth
    // print_list(head);
    // int val = 100, k = 4;
    // List *newHead = insertbeforeKthNode(head, val, k);
    // print_list(newHead);

    // 4. before node
    print_list(head);
    int val = 100;
    List *node = head->next->next->next->next;
    List *newHead = insertBeforeNode(head, node, val);
    print_list(newHead);
    return 0;
}