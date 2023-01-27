#ifndef UNSORTED_H
#define UNSORTED_H

#include "ItemType.h"

class UnsortedType
{
public:
	UnsortedType();		//Done
	~UnsortedType();	//Done

	void MakeEmpty();	//Done
	bool IsFull();		//Done
	int GetLength();	//Done
	ItemType GetItem(ItemType item, bool& found);	//Done
	bool PutItem(ItemType item);	//Done
	bool DeleteItem(ItemType item);	//Done
	void ResetList();	//Done
	ItemType GetNextItem();	//Done

private:
	ItemType list[Max_Items];
	int listSize;
	int loc;
};

#endif // !UNSORTED_H

