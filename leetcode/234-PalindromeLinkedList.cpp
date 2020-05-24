#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *cur = head;
    ListNode *next;

    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        //head->next = prev;
    }
    return prev;
}

void list_all(ListNode * p){
    ListNode * pAux = p;
    while(pAux != nullptr){
        cout << pAux->val << " -> ";
        pAux = pAux->next;
    }cout << endl << "=====================================" << endl;
}

void list_all(ListNode * p, ListNode * end){
    ListNode * pAux = p;
    while(pAux != end){
        cout << pAux->val << " -> ";
        pAux = pAux->next;
    }cout << endl << "=====================================" << endl;
}

bool isPalindrome(ListNode* head) {
    if(head == nullptr) return true;
    ListNode * pPercorreHead = head;
    unsigned short int length = 0, i_middle;
    
    list_all(head);

    unsigned short int counter = 0;
    ListNode * pNode = head;
    while(pPercorreHead != nullptr){
        pPercorreHead = pPercorreHead->next;
        ++counter;
        if(!(counter & 1)){
            pNode = pNode->next;
        }
    }
     cout<< pNode->val<<endl;


    //cout << "middle value: "<<pPercorreHead->val<<endl;

    return true;
}

int main()
{
    ListNode n1(1);
    ListNode n2(2);
    ListNode n3(3);
    ListNode n4(4);
    ListNode n5(5);
    ListNode n6(6);
    ListNode n7(7);
    ListNode n8(8);
    ListNode n9(9);
    ListNode n10(10);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next = &n9;
    n9.next = &n10;
   
   
    cout << boolalpha << isPalindrome(&n1) << endl;
    
    return EXIT_SUCCESS;
}
