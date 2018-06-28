/*
* ItemToPurchase.c - Related function definitions
*
* Related functions
* MakeItemBlank() (2 pts)
* Has a pointer to an ItemToPurchase parameter.
* Sets item's name = "none", item's price = 0, item's quantity = 0
* PrintItemCost()
* Has an ItemToPurchase parameter.
*/
#include "ItemToPurchase.h"
#include <stdio.h>
#include <string.h>

void MakeItemBlank(ItemToPurchase *itemPtr) {
  strcpy(itemPtr->itemName, "none");
  itemPtr->itemPrice = 0;
  itemPtr->itemQuantity = 0;
}

void PrintItemCost (ItemToPurchase *itemPtr) {
  int totalamount = (itemPtr->itemQuantity) * (itemPtr->itemPrice);
  printf("%s %d @ $%d = $%d\n",itemPtr->itemName, itemPtr->itemQuantity,
  itemPtr->itemPrice, totalamount);
}
