#include<stdio.h>

void main()
{
    int amount, x500_notes_needed, x50_notes_needed, x20_notes_needed, x10_notes_needed, x5_notes_needed, x2_notes_needed, x1_notes_needed, remaining_a100, remaining_a50, remaining_a20, remaining_a10, remaining_a5, remaining_a2, remaining_a1, x100_notes_needed, notes_needed, remaining, x500, x100, x50, x20, x10, x5, x2, x1;

    printf("Amount: ");
    scanf("%d", &amount);
    printf("\nEnter number of notes:\n");

    printf("500: ");
    scanf("%d", &x500);

    printf("100: ");
    scanf("%d", &x100);

    printf("50: ");
    scanf("%d", &x50);

    printf("20: ");
    scanf("%d", &x20);

    printf("10: ");
    scanf("%d", &x10);

    printf("5: ");
    scanf("%d", &x5);

    printf("2: ");
    scanf("%d", &x2);

    printf("1: ");
    scanf("%d", &x1);

    if(amount>=0)
    {
        x500_notes_needed = amount/500;

        if(x500_notes_needed<=x500){


                remaining = amount-(x500_notes_needed*500);

                x100_notes_needed = remaining/100;

                if(x100_notes_needed<=x100){

                        remaining_a100 = remaining-(x100_notes_needed*100);

                        x50_notes_needed = remaining_a100/50;


                        if(x50_notes_needed<=x50){

                                remaining_a50 = remaining_a100-(x50_notes_needed*50);

                                x20_notes_needed = remaining_a50/20;

                                if(x20_notes_needed<=x20){


                                        remaining_a20 = remaining_a50-(x20_notes_needed*20);

                                        x10_notes_needed = remaining_a20/10;

                                        if(x10_notes_needed<=x10){


                                               remaining_a10 = remaining_a20-(x10_notes_needed*10);

                                               x5_notes_needed = remaining_a10/5;

                                               if(x5_notes_needed<=x5){

                                                    remaining_a5 = remaining_a10-(x5_notes_needed*5);

                                                    x2_notes_needed = remaining_a5/2;

                                                    if(x2_notes_needed<=x2){

                                                            remaining_a2 = remaining_a5-(x2_notes_needed*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500_notes_needed*500+x100_notes_needed*100+x50_notes_needed*50+x20_notes_needed*20+x10_notes_needed*10+x5_notes_needed*5+x2_notes_needed*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100_notes_needed, x50_notes_needed, x20_notes_needed, x10_notes_needed, x5_notes_needed, x2_notes_needed, x1_notes_needed);
                                                                    }
                                                            }
                                                            else{
                                                                remaining_a1 = remaining_a2-(x1*1);

                                                                    if((x500_notes_needed*500+x100_notes_needed*100+x50_notes_needed*50+x20_notes_needed*20+x10_notes_needed*10+x5_notes_needed*5+x2_notes_needed*2+x1*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100_notes_needed, x50_notes_needed, x20_notes_needed, x10_notes_needed, x5_notes_needed, x2_notes_needed, x1);

                                                            }
                                                    }
                                                    }
                                                    else{


                                                            remaining_a2 = remaining_a5-(x2*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500_notes_needed*500+x100_notes_needed*100+x50_notes_needed*50+x20_notes_needed*20+x10_notes_needed*10+x5_notes_needed*5+x2*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100_notes_needed, x50_notes_needed, x20_notes_needed, x10_notes_needed, x5_notes_needed, x2, x1_notes_needed);

                                                    }
                                               }
                                              } }else{
                                                    remaining_a5 = remaining_a10-(x5*5);

                                                    x2_notes_needed = remaining_a5/2;

                                                    if(x2_notes_needed<=x2){

                                                            remaining_a2 = remaining_a5-(x2_notes_needed*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500_notes_needed*500+x100_notes_needed*100+x50_notes_needed*50+x20_notes_needed*20+x10_notes_needed*10+x5*5+x2_notes_needed*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100_notes_needed, x50_notes_needed, x20_notes_needed, x10_notes_needed, x5, x2_notes_needed, x1_notes_needed);


                                               }
                                        }
                                        else{remaining_a10 = remaining_a20-(x10*10);

                                               x5_notes_needed = remaining_a10/5;

                                               if(x5_notes_needed<=x5){

                                                    remaining_a5 = remaining_a10-(x5_notes_needed*5);

                                                    x2_notes_needed = remaining_a5/2;

                                                    if(x2_notes_needed<=x2){

                                                            remaining_a2 = remaining_a5-(x2_notes_needed*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500_notes_needed*500+x100_notes_needed*100+x50_notes_needed*50+x20_notes_needed*20+x10*10+x5_notes_needed*5+x2_notes_needed*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100_notes_needed, x50_notes_needed, x20_notes_needed, x10, x5_notes_needed, x2_notes_needed, x1_notes_needed);
                                                                   }
                                }
                                else{

                                        remaining_a20 = remaining_a50-(x20*20);

                                        x10_notes_needed = remaining_a20/10;

                                        if(x10_notes_needed<=x10){


                                               remaining_a10 = remaining_a20-(x10_notes_needed*10);

                                               x5_notes_needed = remaining_a10/5;

                                               if(x5_notes_needed<=x5){

                                                    remaining_a5 = remaining_a10-(x5_notes_needed*5);

                                                    x2_notes_needed = remaining_a5/2;

                                                    if(x2_notes_needed<=x2){

                                                            remaining_a2 = remaining_a5-(x2_notes_needed*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500_notes_needed*500+x100_notes_needed*100+x50_notes_needed*50+x20*20+x10_notes_needed*10+x5_notes_needed*5+x2_notes_needed*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100_notes_needed, x50_notes_needed, x20, x10_notes_needed, x5_notes_needed, x2_notes_needed, x1_notes_needed);


                                }
                        }
                        else{
                                remaining_a50 = remaining_a100-(x50*50);

                                x20_notes_needed = remaining_a50/20;

                                if(x20_notes_needed<=x20){


                                        remaining_a20 = remaining_a50-(x20_notes_needed*20);

                                        x10_notes_needed = remaining_a20/10;

                                        if(x10_notes_needed<=x10){


                                               remaining_a10 = remaining_a20-(x10_notes_needed*10);

                                               x5_notes_needed = remaining_a10/5;

                                               if(x5_notes_needed<=x5){

                                                    remaining_a5 = remaining_a10-(x5_notes_needed*5);

                                                    x2_notes_needed = remaining_a5/2;

                                                    if(x2_notes_needed<=x2){

                                                            remaining_a2 = remaining_a5-(x2_notes_needed*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500_notes_needed*500+x100_notes_needed*100+x50*50+x20_notes_needed*20+x10_notes_needed*10+x5_notes_needed*5+x2_notes_needed*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100_notes_needed, x50, x20_notes_needed, x10_notes_needed, x5_notes_needed, x2_notes_needed, x1_notes_needed);


                        }
                }
                else{
                    remaining_a100 = remaining-(x100*100);

                        x50_notes_needed = remaining_a100/50;


                        if(x50_notes_needed<=x50){

                                remaining_a50 = remaining_a100-(x50_notes_needed*50);

                                x20_notes_needed = remaining_a50/20;

                                if(x20_notes_needed<=x20){


                                        remaining_a20 = remaining_a50-(x20_notes_needed*20);

                                        x10_notes_needed = remaining_a20/10;

                                        if(x10_notes_needed<=x10){


                                               remaining_a10 = remaining_a20-(x10_notes_needed*10);

                                               x5_notes_needed = remaining_a10/5;

                                               if(x5_notes_needed<=x5){

                                                    remaining_a5 = remaining_a10-(x5_notes_needed*5);

                                                    x2_notes_needed = remaining_a5/2;

                                                    if(x2_notes_needed<=x2){

                                                            remaining_a2 = remaining_a5-(x2_notes_needed*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500_notes_needed*500+x100*100+x50_notes_needed*50+x20_notes_needed*20+x10_notes_needed*10+x5_notes_needed*5+x2_notes_needed*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500_notes_needed, x100, x50_notes_needed, x20_notes_needed, x10_notes_needed, x5_notes_needed, x2_notes_needed, x1_notes_needed);

                }
        }
        else{remaining = amount-(x500*500);

                x100_notes_needed = remaining/100;

                if(x100_notes_needed<=x100){

                        remaining_a100 = remaining-(x100_notes_needed*100);

                        x50_notes_needed = remaining_a100/50;


                        if(x50_notes_needed<=x50){

                                remaining_a50 = remaining_a100-(x50_notes_needed*50);

                                x20_notes_needed = remaining_a50/20;

                                if(x20_notes_needed<=x20){


                                        remaining_a20 = remaining_a50-(x20_notes_needed*20);

                                        x10_notes_needed = remaining_a20/10;

                                        if(x10_notes_needed<=x10){


                                               remaining_a10 = remaining_a20-(x10_notes_needed*10);

                                               x5_notes_needed = remaining_a10/5;

                                               if(x5_notes_needed<=x5){

                                                    remaining_a5 = remaining_a10-(x5_notes_needed*5);

                                                    x2_notes_needed = remaining_a5/2;

                                                    if(x2_notes_needed<=x2){

                                                            remaining_a2 = remaining_a5-(x2_notes_needed*2);

                                                            x1_notes_needed = remaining_a2/1;

                                                            if(x1_notes_needed<=x1){


                                                                    remaining_a1 = remaining_a2-(x1_notes_needed*1);

                                                                    if((x500*500+x100_notes_needed*100+x50_notes_needed*50+x20_notes_needed*20+x10_notes_needed*10+x5_notes_needed*5+x2_notes_needed*2+x1_notes_needed*1)==amount){

                                                                        printf("Farhan can pay the bill by using the following counts of different notes: \n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", x500, x100_notes_needed, x50_notes_needed, x20_notes_needed, x10_notes_needed, x5_notes_needed, x2_notes_needed, x1_notes_needed);
                                                                    }
    }

    }
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
}
else{
        printf("Won't be able to pay");}
}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
else{
        printf("Won't be able to pay");}
}
 else{
        printf("Invalid");}}
