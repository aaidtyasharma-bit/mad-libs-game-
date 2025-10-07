 #include <stdio.h>
#include <string.h>

int main() {
   // shopping cart program 

   char items[50] = "";
   float price = 0.0f;
   int quantity = 0;
   char currency = '$';
   float total = 0.0f; 

   printf("What item would you like to buy!\n");
   printf("Enter item name: ");
   fgets(items, sizeof(items), stdin);
   
   items[strlen(items) - 1] = 0; // Remove newline character from input
   
   printf("Enter item price: ");
   scanf("%f", &price);

   printf("Enter item quantity: ");
   scanf("%d", &quantity); 
   
   total = price * quantity;
   
   printf("\n----- Receipt -----\n");
  
   printf("Item: %s\n", items);
   printf("Price: %c%.2f\n", currency, price);
   printf("Quantity: %d\n", quantity);
   printf("Total: %c%.2f\n", currency, total);
   printf("\nYou have purchased %d %s(s)\n", quantity, items);

   return 0;
}