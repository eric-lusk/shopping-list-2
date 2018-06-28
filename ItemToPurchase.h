/**
* ItemToPurchase.h - Struct definition and related function declarations
*
* Build the ItemToPurchase struct with the following specifications:
*
* Data members (3 pts)
* char itemName [ ]
* int itemPrice
* int itemQuantity
*/
typedef struct ItemToPurchase{
   char itemName[50];
   int itemPrice;
   int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase*);
void PrintItemCost(ItemToPurchase*);

