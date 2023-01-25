#include "unsorted.h"

UnsortedType::UnsortedType()
{
	listSize = 0;
	loc = 0;
}

UnsortedType::~UnsortedType()
{
}

void UnsortedType::MakeEmpty()
{
	listSize = 0;
}

bool UnsortedType::IsFull()
{
	if (listSize == Max_Items)
		return true;

	return false;
}

int UnsortedType::GetLength()
{
	return listSize;
}

ItemType UnsortedType::GetItem(ItemType item, bool& found)
{
	return ItemType();
}

bool UnsortedType::PutItem(ItemType item)
{
	return false;
}

bool UnsortedType::DeleteItem(ItemType item)
{
	return false;
}

void UnsortedType::ResetList()
{
	loc = 0;
}

ItemType UnsortedType::GetNextItem()
{
	return ItemType();
}
