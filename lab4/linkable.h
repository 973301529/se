// 防止重复定义
#ifndef _LINK_TABLE_H_
#define _LINK_TABLE_H_

#define SUCCESS 0
#define FAILURE (-1)

// LinkTable Node Type
typedef struct LinkTableNode
{
    struct LinkTableNode * pNext;
} tLinkTableNode;

// LinkTable Type
typedef struct LinkTable
{
    tLinkTableNode *pHead;
    tLinkTableNode *pTail;
    int SumOfNode;
} tLinkTable;

// Interface
// Create a LinkTable
tLinkTable * CreateLinkTable();

// Delete
int DeleteLinkTable(tLinkTable *pLinkTable);

// Add a Node to LinkTable
int AddLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode * pNode);

// Delete a Node from LinkTable
int DelLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode * pNode);

// Get LinkTableHead
tLinkTableNode * GetLinkTableHead(tLinkTable *pLinkTable);

// Get next LinkTableNode
tLinkTableNode * GetNextLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode * pNode);

#endif // !_LINK_TABLE_H_
