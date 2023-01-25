#ifndef ITEMTYPE_H
#define ITEMTYPE_H

const int Max_Items = 100;

enum RelationType
{
	LESS,
	GREATER,
	EQUAL
};

class ItemType
{
public:

	ItemType();
	~ItemType();

	RelationType ComparedTo(ItemType item);

private:
};

#endif // !ITEMTYPE_H
