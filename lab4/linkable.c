
#include <stdio.h>
#include <stdlib.h>
#include "linkable.h"

// Create a LinkTable
tLinkTable * CreateLinkTable()
{
    tLinkTable *pTable = (tLinkTable*)malloc(sizeof(tLinkTable));
    pTable->pHead = NULL;
    pTable->pTail = NULL;
    pTable->SumOfNode = 0;
    return pTable;
}

// Delete
int DeleteLinkTable(tLinkTable *pLinkTable)
{
    free(pLinkTable);
    return 0;
}

// Add a Node to LinkTable
int AddLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode * pNode)
{
    if (pLinkTable == NULL)
    {
        printf("The table is empty!\n");
        exit(0);
    }
    if (pNode == NULL)
    {
        printf("The node is empty!\n");
        return 0;
    }
    if (pLinkTable->pHead == NULL)
    {
        pLinkTable->pHead = pNode;
        pLinkTable->pTail = pNode;
        pLinkTable->pTail->pNext = NULL;
        pLinkTable->SumOfNode = 1;
    }
    else
    {
        pLinkTable->pTail->pNext = pNode;
        pLinkTable->pTail = pNode;
        pLinkTable->pTail->pNext = NULL;
        pLinkTable->SumOfNode++;
    }
    return 0;
}

// Get LinkTableHead
tLinkTableNode * GetLinkTableHead(tLinkTable *pLinkTable)
{
    if (pLinkTable == NULL)
    {
        printf("The table is empty!\n");
        exit(0);
    }
    return pLinkTable->pHead;
}

// Get next LinkTableNode
tLinkTableNode * GetNextLinkTableNode(tLinkTable *pLinkTable, tLinkTableNode * pNode)
{
    if (pLinkTable == NULL)
    {
        printf("The table is empty!\n");
        exit(0);
    }
    if (pNode == NULL)
    {
        printf("The node is empty!\n");
        exit(0);
    }
    return pNode->pNext;
}
