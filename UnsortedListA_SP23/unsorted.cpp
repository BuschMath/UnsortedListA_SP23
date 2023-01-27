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
	for (int i = 0; i < listSize; i++)
	{
		if (item.ComparedTo(list[i]) == RelationType::EQUAL)
		{
			found = true;
			return list[i];
		}
	}

	found = false;
	return item;
}

bool UnsortedType::PutItem(ItemType item)
{
	if (!IsFull())
	{
		list[listSize] = item;
		listSize++;
		return true;
	}
	else
		return false;
}

bool UnsortedType::DeleteItem(ItemType item)
{
	for (int i = 0; i < listSize; i++)
	{
		if (item.ComparedTo(list[i]) == RelationType::EQUAL)
		{
			for (int j = i; j < listSize - 1; j++)
			{
				list[i] = list[i + 1];
			}
			listSize--;

			return true;
		}
	}
	return false;
}

void UnsortedType::ResetList()
{
	loc = 0;
}

ItemType UnsortedType::GetNextItem()
{
	return list[loc++];
}
