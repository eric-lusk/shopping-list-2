#include "ItemToPurchase.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  ItemToPurchase firstItem;
  ItemToPurchase secondItem;


  printf("Item 1\n");
  printf("Enter the item name:\n");
  fgets((firstItem.itemName), 50, stdin);
  firstItem.itemName[strcspn(firstItem.itemName, "\n\r")] = 0;

  printf("Enter the item price:\n");
  scanf("%d", &(firstItem.itemPrice));

  printf("Enter the item quantity:\n");
  scanf("%d", &(firstItem.itemQuantity));
  printf("\n");

  getchar();  // using to clear buffer, otherwise will mess up following fgets

  printf("Item 2\n");
  printf("Enter the item name:\n");
  fgets((secondItem.itemName), 50, stdin);
  secondItem.itemName[strcspn(secondItem.itemName, "\n\r")] = 0;

  printf("Enter the item price:\n");
  scanf("%d", &(secondItem.itemPrice));

  printf("Enter the item quantity:\n");
  scanf("%d", &(secondItem.itemQuantity));
  printf("\n");

  printf("TOTAL COST\n");
  PrintItemCost(&firstItem);
  PrintItemCost(&secondItem);
  printf("\n");
  printf("Total: $%d\n",(firstItem.itemPrice * firstItem.itemQuantity)+
    (secondItem.itemPrice * secondItem.itemQuantity));


  return 0;

}
