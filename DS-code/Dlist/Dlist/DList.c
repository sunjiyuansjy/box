#include"DList.h"




DListNode* BuyNewDListNode(DLDataType data)
{
	DListNode* pNewNode = (DListNode*)malloc(sizeof(DListNode));
	if (NULL == pNewNode)
		exit(1);
	pNewNode->_pNext = NULL;
	pNewNode->_pPre = NULL;
	pNewNode->_data = data;
	return pNewNode;
}

void ListInit(DList* plist)
{
	//空链表也要有节点
	assert(plist);
	plist->_pHead = BuyNewDListNode(0);//先定义个头节点
	plist->_pHead->_pNext = plist->_pHead;
	plist->_pHead->_pPre = plist->_pHead;//双向链表始终要循环起来，故初始的头节点两端指向它自己
}

void ListDestory(DList* plist)
{
	//销毁链表中的有效节点
	DListNode* pDel = plist->_pHead->_pNext;//将有效节点与头分开
	while (pDel != plist->_pHead)
	{
		plist->_pHead->_pNext = pDel->_pNext;
		free(pDel);
		pDel = plist->_pHead->_pNext;
	}
	free(plist->_pHead);//单独销毁头
	plist->_pHead = NULL;
}

void ListPushBack(DList* plist, DLDataType x)
//双向链表需要改变四个指针域
{	//原则是最好不要破坏原链表否则后续将不太好找，故先将新节点的pPre指向前一个节点，将它的next指向头，再将尾的next指向新断原来尾对头的指向，
	//最后将原链表的尾的next指向新
	//新节点的next指向head
	assert(plist);
	DListNode* pNewNode=BuyNewDListNode(x);
	pNewNode->_pPre = plist->_pHead->_pNext;
	pNewNode->_pNext = plist->_pHead;
	
	plist->_pHead->_pPre = pNewNode;
	pNewNode->_pPre->_pNext = pNewNode;
}
void ListPopBack(DList* plist)
{
	//尾删则只需要改变两个指针域，将被删的头一个的next指向head，将头的pPre指向前一个，则尾被扔下，释放节点即可
	//先找被删
	DListNode* pDel = plist->_pHead->_pPre;//尾是头的pPre
	if (pDel != plist->_pHead)
	{
		pDel->_pPre->_pNext = plist->_pHead;
		plist->_pHead->_pPre = pDel->_pPre;
	}

}
void ListPushFront(DList* plist, DLDataType x)
{
	DListNode* pNewNode = BuyNewDListNode(x);
	
	pNewNode->_pNext = plist->_pHead->_pNext;
	pNewNode->_pPre = plist->_pHead;
	
	plist->_pHead->_pNext = pNewNode;
	pNewNode->_pNext->_pPre = pNewNode;
}
void ListPopFront(DList* plist)
{
	assert(plist);
	DListNode* pDel = plist->_pHead->_pNext;
	while (pDel != plist->_pHead)
	{
		plist->_pHead->_pNext = pDel->_pNext;
		pDel->_pNext->_pPre = plist->_pHead;
		free(pDel);
	}
}

DListNode* ListFind(DList* plist, DLDataType x)
{
	assert(plist);
	DListNode* pCur = plist->_pHead->_pNext;
	while (pCur != plist->_pHead)
	{
		if (pCur->_data = x)
			return pCur;
		pCur = pCur->_pNext;

	}
	return NULL;
}

// 在pos的前面进行插入
void ListInsert(DListNode* pos, DLDataType x)
{
	assert(pos);
	DListNode* pNewNode = BuyNewDListNode(x);
	while(pos!=plist)


}

// 删除pos位置的节点
void ListErase(DListNode* pos);

void ListRemove(DList* plist, DLDataType x);

void ListPrint(DList* plist)
{
	DListNode* pCur = plist->_pHead->_pNext;
	while (pCur!=plist->_pHead)//转到头说明一圈完了
	{
		printf("%d ", pCur->_data);
		pCur = pCur->_pNext;
	}
	printf("\n");
}


void TestDList1()
{
	DList dl;
	ListInit(&dl);
	ListPushBack(&dl, 1);
	ListPushBack(&dl, 2);
	ListPushBack(&dl, 3);
	ListPushBack(&dl, 4);
	ListPushBack(&dl, 5);
	ListPrint(&dl);
}

