#include <bits/stdc++.h>
using namespace std;

// struct ListNode{ // struct don't offer you OOP's concept
class ListNode
{
public:
    int val;
    ListNode *next = nullptr; // NULL

    // can have multiple constructor
    ListNode()
    {
        val = 0,
        next = NULL;
    }

    ListNode(int data, ListNode *nxt = nullptr)
    {
        val = data;
        next = nxt;
    }
};

void print_linklist(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}

ListNode *convertArrayToLL(vector<int> &vec)
{
    ListNode *head = new ListNode(vec[0]);
    ListNode *mov = head;
    for (int i = 1; i < vec.size(); i++)
    {
        mov->next = new ListNode(vec[i]);
        mov = mov->next;
    }
    return head;
}

int lengthOfLL(ListNode *head)
{
    int cnt = 0;
    while (head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

bool ele_exist_in_ll(ListNode *head, int &element)
{
    while (head)
    {
        if (head->val == element)
            return true;
        head = head->next;
    }
    return false;
}

ListNode *deleteHead(ListNode *head)
{
    if (head == NULL)
        return head;
    ListNode *temp = head;
    head = head->next;
    delete temp;
    return head;
}

ListNode *deleteTail(ListNode *head)
{
    if (head == nullptr)
        return NULL;
    if (head->next == nullptr)
    {
        ListNode *freeNode = head;
        delete freeNode;
        return NULL;
    }
    ListNode *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    ListNode *freeNode = temp->next;
    temp->next = NULL;
    delete freeNode;
    return head;
}

// mine
ListNode *deleteKthElement(ListNode *head, int &pos)
{
    if (pos <= 0)
        return head;
    if (head == NULL)
        return head;
    if (pos == 1)
        return head->next;
    int times = pos - 2;
    ListNode *temp = head;
    while (times-- and temp)
    {
        temp = temp->next;
    }
    if (temp and temp->next)
    {
        ListNode *node = temp->next;
        if (temp->next)
            temp->next = temp->next->next;
        delete node;
    }
    return head;
}

// striver
ListNode *deletekthElement2(ListNode *head, int &k)
{
    if (head == NULL)
        return head;
    ListNode *prev = NULL, *curr = head;
    if (k == 1)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    while (curr != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}

ListNode *deleteValue(ListNode *head, int value)
{
    if (head == NULL)
        return head;
    if (head->val == value)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    ListNode *prev = NULL, *temp = head;
    while (temp != NULL)
    {
        if (temp->val == value)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

ListNode *insertAtHead(ListNode *head, int &val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
        return newNode;

    newNode->next = head;
    head = newNode;
    return head;
}

ListNode *insertAtTail(ListNode *head, int &val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
        return newNode;
    ListNode *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

ListNode *insertAtKthPosition(ListNode *head, int &val, int &pos)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
        return newNode;
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    ListNode *prev = NULL, *curr = head;
    int cnt = 0;
    while (curr != NULL)
    {
        cnt++;
        if (cnt == pos)
        {
            newNode->next = curr;
            prev->next = newNode;
            return head;
        }
        prev = curr;
        curr = curr->next;
    }
    prev->next = newNode;
    return head;
}

ListNode *insertBeforeValue(ListNode *head, int x, int val)
{
    if (head == NULL)
        return head;
    ListNode *newNode = new ListNode(val);
    if (head->val == x)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    ListNode *prev = NULL, *curr = head;
    while (curr != NULL)
    {
        if (curr->val == x)
        {
            newNode->next = curr;
            prev->next = newNode;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}

int main()
{
    // l1
    // object vs pointer
    ListNode obj = ListNode(2); // w/o new keyword its only object
    cout << obj.val << " " << obj.next << endl;

    ListNode *head1 = new ListNode(2); // pointer which store address
    cout << head1->val << " " << head1->next << endl;

    vector<int> vec = {12, 5, 8, 7};

    // array to ll
    ListNode *head = convertArrayToLL(vec);

    // print ll
    print_linklist(head);

    // length of ll
    cout << "Length: " << lengthOfLL(head) << endl;

    // search element in ll
    int element = 4;
    cout << "Element present: " << ele_exist_in_ll(head, element) << endl;

    // l2
    // linked list ->
    // 1. deletion, 2. insertion
    // head, position, value, last -> 4*2 -> 8 problems

    // 1. delete head of ll
    // print_linklist(head);
    // ListNode *newHead = deleteHead(head);
    // print_linklist(newHead);

    // 2. delete tail of ll
    // print_linklist(head);
    // ListNode *newHead = deleteTail(head);
    // print_linklist(newHead);

    // 3. delete kth element
    // cout << "Delete kth element " << endl;
    // print_linklist(head);
    // int pos = 7;
    // // ListNode *newHead = deleteKthElement(head, pos);
    // ListNode *newHead = deletekthElement2(head, pos);
    // print_linklist(newHead);

    // 4. delelte value of ll
    // print_linklist(head);
    // ListNode *newHead = deleteValue(head, 8);
    // print_linklist(newHead);

    // 1. insert at head of ll
    // print_linklist(head);
    // int val = 2;
    // ListNode *newHead = insertAtHead(head, val);
    // print_linklist(newHead);

    // 2. insert at end
    // print_linklist(head);
    // int val = 100;
    // ListNode *newHead = insertAtTail(head, val);
    // print_linklist(newHead);

    // 3. insert at kth position
    // print_linklist(head);
    // int k = 100, val = 100;
    // ListNode *newHead = insertAtKthPosition(head, val, k);
    // print_linklist(newHead);

    // 4. insert a value before a value x
    print_linklist(head);
    int x = 8;
    ListNode *newHead = insertBeforeValue(head, x, 100);
    print_linklist(newHead);
    return 0;
}