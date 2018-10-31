#include<iostream>
using namespace std;

class LinkedList;
class ListNode
{
    private:
        int data;
        ListNode *next;
    public:
        ListNode():data(0),next(0){};
        ListNode(int a):data(a),next(0){};

        friend class LinkedList;
};

class LinkedList
{
    private:
        ListNode *first;
    public:
        LinkedList():first(0){};
        void PrintList();
        void Push_front(int x);
        void Push_back(int x);
        void Delete(int x);
        void Clear();
        void Reverse();
};
void LinkedList::PrintList()
{
    if(first==0)
    {
        cout<<"List is empty."<<endl;
        return;
    }

    ListNode *current=first;
    while(current !=0)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

void LinkedList::Push_back(int x)
{
    ListNode *newNode =new ListNode(x);
    if(first==0)
    {
        first=newNode;
        return;
    }
    ListNode *current=first; //建立一個current先放第一個
    while(current->next!=0)//再慢慢移到最尾端
    {
        current=current->next;
    }
    current->next=newNode;

}
void LinkedList::Reverse()
{
    if(first==0||first->next==0)
    {
        return;
    }
    ListNode *previous=0;
    ListNode *current=first;
    ListNode *preceding=first->next;

    while(preceding!=0)
    {
        current->next=previous;
        previous=current;
        current=preceding;
        preceding =preceding->next;
    }
    current->next=previous;
    first=current;
}
int main()
{
     LinkedList list;     // 建立LinkedList的object
     list.PrintList();    // 目前list是空的
     list.Push_back(5);   // list: 5
     list.Push_back(3);   // list: 5 3
     list.PrintList();
}
