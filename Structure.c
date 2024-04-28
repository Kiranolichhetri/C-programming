// create a structure "mobile" with data member model
and price and display the model  
of mobile having price more than rs10,000.

#include <stdio.h>

// Define the structure
struct mobilr {
     char model[50];
     int price;
};

int main() {
  // create an array of structures
    struct mobile phones[3] = {
{"iphone 12",80000},
{"Samsung Galaxy s21",90000},
{"onePlus 9 pro", 65000},
           };

// Display models with price > Rs. 10,000
 
printf("Models with price more than Rs. 10,000:\n");
for(int 1 = 0;i<3; i++) {
if (phone[i].price > 10000) {
printf("%s\n", phones[i].model);
}
}

return 0;
}
