#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int choice,opt,qty,n;
    float amount=0.0,bill=0.0,gst;
    char cname[50];
    printf("Enter Customer's name : ");
    gets(cname);
    printf("\n\tWelcome %s to Khana Khazana!\n",cname);
    do
    {
        printf("\n--------------------------------------------------------------------\n");
        printf("                                MENU                                \n");
        printf("--------------------------------------------------------------------\n");
        printf("(1) Starters\n(2) Noodles/Pasta\n(3) Biryani/Rice\n(4) Roti/Naan\n(5) Side Dishes\n(6) Soup\n(7) Dessert");
        printf("\n\nPlease enter the number of what kind you'd like to order : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nSl No.      Starters                         Price(per plate)\n");
                    printf("________________________________________________________________\n");
                    printf(" 1.\t Veg Pakora(6 pcs)                           40.00\n");
                    printf(" 2.\t Veg Momo Steamed(5 pcs)                     50.00\n");
                    printf(" 3.\t Veg Momo Fried(5 pcs)                       55.00\n");
                    printf(" 4.\t Crispy Baby Corn                            60.00\n");
                    printf(" 5.\t Chicken Pakora(6 pcs)                       60.00\n");
                    printf(" 6.\t Chicken Momo Steamed(5 pcs)                 55.00\n");
                    printf(" 7.\t Chicken Momo Fried(5 pcs)                   60.00\n");
                    printf(" 8.\t Chicken Lolypop(4 pcs)                      65.00\n");
                    printf(" 9.\t Fish Fry(1 pc)                              40.00\n");
                    printf("10.\t Fish Finger (6 pcs)                         55.00\n");
                    printf("\n\n\tWhat would you like to order?  Enter the Sl No. :  ");
                    scanf("%d",&opt);
                    printf("\n\tEnter the quantity (No. of plates) :  ");
                    scanf("%d",&qty);
                    if(opt==1)
                    {
                        amount=amount+qty*40;
                        printf("\n\t You have ordered %d plate(s) of Veg Pakora \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==2)
                    {
                        amount=amount+qty*50;
                        printf("\n\t You have ordered %d plate(s) of Veg Momo (Steamed) \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==3)
                    {
                        amount=amount+qty*55;
                        printf("\n\t You have ordered %d plate(s) of Veg Momo (Fried) \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==4)
                    {
                        amount=amount+qty*60;
                        printf("\n\t You have ordered %d plate(s) of Crispy Baby Corn \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==5)
                    {
                        amount=amount+qty*60;
                        printf("\n\t You have ordered %d plate(s) of Chicken Pakora \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==6)
                    {
                        amount=amount+qty*55;
                        printf("\n\t You have ordered %d plate(s) of Chicken Momo (Steamed) \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==7)
                    {
                        amount=amount+qty*60;
                        printf("\n\t You have ordered %d plate(s) of Chicken Momo (Fried) \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==8)
                    {
                        amount=amount+qty*65;
                        printf("\n\t You have ordered %d plate(s) of Chicken Lolypop \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==9)
                    {
                        amount=amount+qty*40;
                        printf("\n\t You have ordered %d plate(s) of Fish Fry \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if(opt==10)
                    {
                        amount=amount+qty*55;
                        printf("\n\t You have ordered %d plate(s) of Fish Finger \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else
                    {
                        printf("\nWrong choice! Please choose a correct Sl No. \n");
                    }
                    break;

            case 2: printf("\nSl No.      Noodles/Pasta                    Price(per plate)\n");
                    printf("________________________________________________________________\n");
                    printf(" 1.\t Veg Noodles                                  75.00\n");
                    printf(" 2.\t Veg Pasta                                    85.00\n");
                    printf(" 3.\t Veg Chopsuey                                 90.00\n");
                    printf(" 4.\t Chilli Garlic Noodles                       100.00\n");
                    printf(" 5.\t Schezwan Noodles                            100.00\n");
                    printf(" 6.\t Chicken Noodles                              90.00\n");
                    printf(" 7.\t Mixed Noodles                               105.00\n");
                    printf(" 8.\t Non-veg Chopsuey                            110.00\n");
                    printf("\n\n\tWhat would you like to order?  Enter the Sl No. :  ");
                    scanf("%d",&opt);
                    printf("\n\tEnter the quantity (No. of plates) :  ");
                    scanf("%d",&qty);
                    if(opt==1)
                    {
                        amount=amount+qty*75;
                        printf("\n You have ordered %d plate(s) of Veg Noodles \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==2)
                    {
                        amount=amount+qty*85;
                        printf("\n You have ordered %d plate(s) of Veg Pasta \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==3)
                    {
                        amount=amount+qty*90;
                        printf("\n You have ordered %d plate(s) of Veg Chopsuey \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==4)
                    {
                        amount=amount+qty*100;
                        printf("\n You have ordered %d plate(s) of Chilli Garlic Noodles \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==5)
                    {
                        amount=amount+qty*100;
                        printf("\n You have ordered %d plate(s) of Schezwan Noodles \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==6)
                    {
                        amount=amount+qty*90;
                        printf("\n You have ordered %d plate(s) of Chicken Noodles \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==7)
                    {
                        amount=amount+qty*105;
                        printf("\n You have ordered %d plate(s) of Mixed Noodles \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==8)
                    {
                        amount=amount+qty*110;
                        printf("\n You have ordered %d plate(s) of Non-veg Chopsuey \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else
                    {
                        printf("\nWrong choice! Please choose a correct Sl No. \n");
                    }
                    break;

            case 3: printf("\nSl No.      Biryani/Rice                    Price(per plate)\n");
                    printf("________________________________________________________________\n");
                    printf(" 1.\t Zeera Rice                                60.00\n");
                    printf(" 2.\t Peas Polao                                70.00\n");
                    printf(" 3.\t Veg Biryani                               75.00\n");
                    printf(" 4.\t Schezwan Fried Rice (Veg)                 75.00\n");
                    printf(" 5.\t Schezwan Fried Rice (Egg)                 80.00\n");
                    printf(" 6.\t Chicken Fried Rice                        90.00\n");
                    printf(" 7.\t Chicken Biryani                          100.00\n");
                    printf(" 8.\t Nizami Mutton Biryani                    115.00\n");
                    printf("\n\n\tWhat would you like to order?  Enter the Sl No. :  ");
                    scanf("%d",&opt);
                    printf("\n\tEnter the quantity (No. of plates) :  ");
                    scanf("%d",&qty);
                    if(opt==1)
                    {
                        amount=amount+qty*60;
                        printf("\n You have ordered %d plate(s) of Zeera Rice \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==2)
                    {
                        amount=amount+qty*70;
                        printf("\n You have ordered %d plate(s) of Peas Polao \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==3)
                    {
                        amount=amount+qty*75;
                        printf("\n You have ordered %d plate(s) of Veg Biryani \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==4)
                    {
                        amount=amount+qty*75;
                        printf("\n You have ordered %d plate(s) of Schezwan Fried Rice (Veg) \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==5)
                    {
                        amount=amount+qty*80;
                        printf("\n You have ordered %d plate(s) of Schezwan Fried Rice (Egg) \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==6)
                    {
                        amount=amount+qty*90;
                        printf("\n You have ordered %d plate(s) of Chicken Fried Rice \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==7)
                    {
                        amount=amount+qty*100;
                        printf("\n You have ordered %d plate(s) of Chicken Biryani \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==8)
                    {
                        amount=amount+qty*115;
                        printf("\n You have ordered %d plate(s) of Nizami Mutton Biryani \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else
                    {
                        printf("\nWrong choice! Please choose a correct Sl No. \n");
                    }
                    break;

            case 4: printf("\nSl No.      Roti/Naan                       Price(per piece)\n");
                    printf("________________________________________________________________\n");
                    printf(" 1.\t Plain Naan                                15.00\n");
                    printf(" 2.\t Butter Naan                               20.00\n");
                    printf(" 3.\t Roomali Roti                               8.00\n");
                    printf(" 4.\t Tandoori Roti                             10.00\n");
                    printf(" 5.\t Aloo Paratha                              20.00\n");
                    printf(" 6.\t Lachcha Paratha                           20.00\n");
                    printf(" 7.\t Pudina Paratha                            20.00\n");
                    printf("\n\n\tWhat would you like to order?  Enter the Sl No. :  ");
                    scanf("%d",&opt);
                    printf("\n\tEnter the quantity (No. of plates) :  ");
                    scanf("%d",&qty);
                    if(opt==1)
                    {
                        amount=amount+qty*15;
                        printf("\n You have ordered %d piece(s) of Plain Naan \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==2)
                    {
                        amount=amount+qty*20;
                        printf("\n You have ordered %d piece(s)of Butter Naan \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==3)
                    {
                        amount=amount+qty*8;
                        printf("\n You have ordered %d piece(s) of Roomali Roti \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==4)
                    {
                        amount=amount+qty*10;
                        printf("\n You have ordered %d piece(s) of Tandoori Roti \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==5)
                    {
                        amount=amount+qty*20;
                        printf("\n You have ordered %d piece(s) of Aloo Paratha \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==6)
                    {
                        amount=amount+qty*20;
                        printf("\n You have ordered %d piece(s) of Lachcha Paratha \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==7)
                    {
                        amount=amount+qty*20;
                        printf("\n You have ordered %d piece(s) of Pudina Paratha \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else
                    {
                        printf("\nWrong choice! Please choose a correct Sl No. \n");
                    }
                    break;

            case 5: printf("\nSl No.      Side Dishes                     Price(per plate)\n");
                    printf("________________________________________________________________\n");
                    printf(" 1.\t Chana Masala                              50.00\n");
                    printf(" 2.\t Chilli Paneer                             65.00\n" );
                    printf(" 3.\t Paneer Butter Masala                      70.00\n");
                    printf(" 4.\t Navratna Korma                            70.00\n");
                    printf(" 5.\t Baby Corn Manchurian                      75.00\n");
                    printf(" 6.\t Prawn Masala                             100.00\n");
                    printf(" 7.\t Fish Curry                                80.00\n");
                    printf(" 8.\t Mutton Masala                             95.00\n");
                    printf(" 9.\t Garlic Chilli Chicken                     80.00\n");
                    printf("10.\t Chicken Manchurian                        90.00\n");
                    printf("\n\n\tWhat would you like to order?  Enter the Sl No. :  ");
                    scanf("%d",&opt);
                    printf("\n\tEnter the quantity (No. of plates) :  ");
                    scanf("%d",&qty);
                    if(opt==1)
                    {
                        amount=amount+qty*50;
                        printf("\n\t You have ordered %d plate(s) of Chana Masala \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==2)
                    {
                        amount=amount+qty*65;
                        printf("\n\t You have ordered %d plate(s) of Chilli Paneer \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==3)
                    {
                        amount=amount+qty*70;
                        printf("\n\t You have ordered %d plate(s) of Paneer Butter Masala \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==4)
                    {
                        amount=amount+qty*70;
                        printf("\n\t You have ordered %d plate(s) of Navratna Korma  \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==5)
                    {
                        amount=amount+qty*75;
                        printf("\n\t You have ordered %d plate(s) of Baby Corn Manchurian \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==6)
                    {
                        amount=amount+qty*100;
                        printf("\n\t You have ordered %d plate(s) of Prawn Masala \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==7)
                    {
                        amount=amount+qty*80;
                        printf("\n\t You have ordered %d plate(s) of Fish Curry \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==8)
                    {
                        amount=amount+qty*95;
                        printf("\n\t You have ordered %d plate(s) of Mutton Masala \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==9)
                    {
                        amount=amount+qty*80;
                        printf("\n\t You have ordered %d plate(s) of Garlic Chilli Chicken \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if(opt==10)
                    {
                        amount=amount+qty*90;
                        printf("\n\t You have ordered %d plate(s) of Chicken Manchurian \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else
                    {
                        printf("\nWrong choice! Please choose a correct Sl No. \n");
                    }
                    break;
            case 6: printf("\nSl No.      Soup                              Price(per bowl)\n");
                    printf("________________________________________________________________\n");
                    printf(" 1.\t Lemon Coriander Soup                       35.00\n");
                    printf(" 2.\t Veg Hot and Sour Soup                      40.00\n");
                    printf(" 3.\t Veg Sweet Corn Soup                        50.00\n");
                    printf(" 4.\t Chicken Hot and Sour Soup                  50.00\n");
                    printf(" 5.\t Chicken Sweet Corn Soup                    60.00\n");
                    printf(" 6.\t Chicken Manchow Soup                       65.00\n");
                    printf("\n\n\tWhat would you like to order?  Enter the Sl No. :  ");
                    scanf("%d",&opt);
                    printf("\n\tEnter the quantity (No. of plates) :  ");
                    scanf("%d",&qty);
                    if(opt==1)
                    {
                        amount=amount+qty*35;
                        printf("\n You have ordered %d bowl(s) of Lemon Coriander Soup  \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==2)
                    {
                        amount=amount+qty*40;
                        printf("\n You have ordered %d bowl(s) of Veg Hot and Sour Soup \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==3)
                    {
                        amount=amount+qty*50;
                        printf("\n You have ordered %d bowl(s) of Veg Sweet Corn Soup \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==4)
                    {
                        amount=amount+qty*50;
                        printf("\n You have ordered %d bowl(s) of Chicken Hot and Sour Soup \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==5)
                    {
                        amount=amount+qty*60;
                        printf("\n You have ordered %d bowl(s) of Chicken Sweet Corn Soup  \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==6)
                    {
                        amount=amount+qty*65;
                        printf("\n You have ordered %d bowl(s) of Chicken Manchow Soup \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else
                    {
                        printf("\nWrong choice! Please choose a correct Sl No. \n");
                    }
                    break;
            case 7: printf("\nSl No.      Dessert                           Price(per plate)\n");
                    printf("________________________________________________________________\n");
                    printf(" 1.\t Chocolate Brownie (4 pc)                    80.00\n");
                    printf(" 2.\t Sour Cream Doughnut (4 pc)                  60.00\n");
                    printf(" 3.\t Chocolate Mousse (4 pc)                     80.00\n");
                    printf(" 4.\t Butterscotch Pie (4 pc)                     60.00\n");
                    printf(" 5.\t Caramel Cardamom Bar (4 pc)                 60.00\n");
                    printf(" 6.\t Dark Chocolate Pudding                      35.00\n");
                    printf("\n\n\tWhat would you like to order?  Enter the Sl No. :  ");
                    scanf("%d",&opt);
                    printf("\n\tEnter the quantity (No. of plates) :  ");
                    scanf("%d",&qty);
                    if(opt==1)
                    {
                        amount=amount+qty*80;
                        printf("\n You have ordered %d plate(s) of Chocolate Brownie  \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==2)
                    {
                        amount=amount+qty*60;
                        printf("\n You have ordered %d plate(s) of Sour Cream Doughnut \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==3)
                    {
                        amount=amount+qty*80;
                        printf("\n You have ordered %d plate(s) of Chocolate Mousse \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==4)
                    {
                        amount=amount+qty*60;
                        printf("\n You have ordered %d plate(s) of Butterscotch Pie \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==5)
                    {
                        amount=amount+qty*60;
                        printf("\n You have ordered %d plate(s) of Caramel Cardamom Bar  \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else if (opt==6)
                    {
                        amount=amount+qty*35;
                        printf("\n You have ordered %d bowl(s) of Dark Chocolate Pudding \n\t Amount = %0.2f\n",qty,amount);
                    }
                    else
                    {
                        printf("\nWrong choice! Please choose a correct Sl No. \n");
                    }
                    break;
            default : printf("\n Wrong Choice !! ");
    }
    printf("\n Want to order anything more?\n\tPress 1 to continue\n\tPress 0 to exit\n");
    scanf("%d",&n);
    }
    while(n==1);
    gst=(amount*18)/100;
    bill=amount+gst;
printf("\n\n\tYour Total Amount in INR \t\t= %0.2f",amount);
printf("\n\tGST (18%% of Total) in INR \t\t= %0.2f",gst);
printf("\n\tNet Payable Amount in INR \t\t= %0.2f",bill);
printf("\n\n\t ** Thank you %s! Enjoy The Food! Please Visit Again! **\n",cname);
}
