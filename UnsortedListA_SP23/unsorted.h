#ifndef UNSORTED_H
#define UNSORTED_H

#include "ItemType.h"

class UnsortedType
{
public:
	UnsortedType();
	~UnsortedType();

	void MakeEmpty();	//Done
	bool IsFull();		//Done
	int GetLength();	//Done
	ItemType GetItem(ItemType item, bool& found);	//Done
	bool PutItem(ItemType item);
	bool DeleteItem(ItemType item);
	void ResetList();	//Done
	ItemType GetNextItem();

private:
	ItemType list[Max_Items];
	int listSize;
	int loc;
};

#endif // !UNSORTED_H

