#include "List.h"
void Init(LIST& l)
{
    l.pHead = l.pTail = NULL;

}

NODE* GetNode(int x)
{
    NODE* p = new NODE;
    if (p == NULL)
        return NULL;
    p->info = x;
    p->pNext = NULL;
    p->pPrev = NULL;
    return p;
}

void AddHead(LIST& l, NODE* p)
{
    if (l.pHead == NULL)
        l.pHead = l.pTail = p;
    else
    {
        p->pNext = l.pHead;
        l.pHead->pPrev = p;
        l.pHead = p;
    }
}

void AddTail(LIST& l, NODE* p)
{
    if (l.pTail == NULL)
        l.pTail = l.pHead = p;
    else
    {
        p->pPrev = l.pTail;
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void Input(LIST& l)
{
    int n;
    cout << "Nhap n= ";
    cin >> n;
    Init(l);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Nhap so thu " << i << " :" << endl;
        cin >> x;
        NODE* p = GetNode(x);
        if (p != NULL)
            AddTail(l, p);

    }
}

void Output(LIST l)
{
    NODE* p = l.pHead;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->pNext;
    }
    cout << endl;
}

void DelHead(LIST& l)
{
    if (l.pHead != NULL)
    {
        l.pHead = l.pHead->pNext;
        l.pHead->pPrev = NULL;
    }

}

void DelTail(LIST& l)
{
    if (l.pTail != NULL)
    {
        l.pTail = l.pTail->pPrev;
        l.pTail->pNext = NULL;
    }
}

void DaoGiaTri(LIST& l)
{
    LIST lst;
    Init(lst);
    for (NODE* p = l.pHead; p != NULL; p = p->pNext)
    {
        NODE* q = GetNode(p->info);
        if (q != NULL) AddHead(lst, q);
    }
    l = lst;
}

void DaoLienKet(LIST& l)
{
    NODE* tmp = NULL;
    NODE* cur = l.pHead;
    while (cur != NULL)
    {
        tmp = cur->pPrev;
        cur->pPrev = cur->pNext;
        cur->pNext = tmp;
        cur = cur->pPrev;
    }
    if (tmp != NULL)
        l.pHead = tmp->pPrev;
}
