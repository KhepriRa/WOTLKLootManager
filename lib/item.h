#ifndef _ITEM_H_
#define _ITEM_H_

class Item{
	
};

typedef struct ItemChain_s{
	Item item;
	ItemChain_s* next;
} ItemChain;

#endif