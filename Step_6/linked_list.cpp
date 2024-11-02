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

int main()
{

    // object vs pointer
    ListNode obj = ListNode(2); // w/o new keyword its only object
    cout << obj.val << " " << obj.next << endl;

    ListNode *head1 = new ListNode(2); // pointer which store address
    cout << head1->val << " " << head1->next << endl;

    vector<int> vec = {2, 3, 4, 5};

    // array to ll
    ListNode *head = convertArrayToLL(vec);

    // print ll
    print_linklist(head);

    // length of ll
    cout << "Length: " << lengthOfLL(head) << endl;

    // search element in ll
    int element = 4;
    cout << "Element present: " << ele_exist_in_ll(head, element) << endl;

    return 0;
}