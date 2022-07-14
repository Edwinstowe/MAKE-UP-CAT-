//ZETECH RESTAURANT
#include <stdlib.h>

void main(void)
{
    int code, Quantity;
    float price, amt, totalAmt, cash, change;
    char addAnother;
    // do-while -> post-test
    do{
    system("cls");
    printf("=========----------=====");
    printf("ZETECH RESTAURANT OVERLOAD MENU\n");
    printf("=========================\n\n");
    printf("[1] Hot dog Overload\t\tKsh 90.00\n");
    printf("[2] Milk Shake Overload\t\tKsh 150.00\n");
    printf("[3] Hamburger Overload\t\tKsh 300.00\n ");
    printf("[4] French Fries Overload\t\tKsh 150.00\n");
    printf("[5] Coffee Overload\t\tKsh 70.00\n");
    printf("[6] Beef Smokie Overload\t\tKsh 40.00\n");

    printf("\nEnter Code\t: ");
    scanf("%d", &code);
    printf("\nEnter Quantity\t: ");
    scanf("%d", &Quantity);

    switch(code){
        case 1: price = 90.00;
                break;
        case 2: price = 150.00;
                break;
        case 3: price = 300.00;
                break;
        case 4: price = 150.00;
                break;
        case 5: price = 70.00;
                break;
        case 6: price = 40.00;
                break;



    }
     amt = price * Quantity;

     printf("\nAmount: %.2f", amt);
    return 0;





      totalAmt = totalAmt + amt;
      printf("\nTotal Amount\t: %.2f, totalAmt");
      printf("\nAdd another order(y/n)? ");
      addAnother = getch();
  }while(addAnother == 'y' || addAnother =='Y');

  do{
        printf("\nCash Tendered\t: ");
   scanf("%f", &cash);


  }while(cash < totalAmt);



   change = cash - totalAmt;
   printf("\nChange\t\t: %.2f", change);
   printf("\n\nThank you! Come Again!");

}
