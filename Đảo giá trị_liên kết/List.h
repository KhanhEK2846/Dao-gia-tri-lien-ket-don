#pragma once
#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node* pNext;
    struct node* pPrev;
};
typedef struct node NODE;
struct list
{
    NODE* pHead;
    NODE* pTail;
};
typedef struct list LIST;
typedef struct list LIST;
void Init(LIST& l);
NODE* GetNode(int x);
void AddHead(LIST& l, NODE* p);
void AddTail(LIST& l, NODE* p);
void Input(LIST& l);
void Output(LIST l);
void DaoGiaTri(LIST& l);
void DaoLienKet(LIST& l);

