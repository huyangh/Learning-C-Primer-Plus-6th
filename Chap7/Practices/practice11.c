//
// Created by huyangh on 2020/6/3.
//ABC 邮购杂货店出售的洋蓟售价为 2.05 美元/磅，甜菜售价为 1.15美元/磅，
//胡萝卜售价为 1.09美元/磅。在添加运费之前，100美元的订单有5%的打折优惠。
//少于或等于5磅的订单收取6.5美元的运费和包装费，5磅～20磅的订单收取14美元的运费和包装费，
//超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。
//编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的响应，
//即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜的磅数，q 是退出订购。
//程序要记录累计的重量。即，如果用户输入 4 磅的甜菜，然后输入 5磅的甜菜，
//程序应报告9磅的甜菜。然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。
//随后，程序应显示所有的购买信息：物品售价、订购的重量（单位磅）、订购的蔬菜费用、订单的总费用、
//折扣（如果有的话）、运费和包装费，以及所有的费用总额。

#include <stdio.h>
#define ARTICHOKE     2.05
#define BEET          1.15
#define CARROT        1.09
#define DISCOUNT_MIN  100
#define DISCOUNT_RATE 0.05
#define POSTAGE1      6.5
#define BASE1         5
#define POSTAGE2      14
#define BASE2         20
#define POSTAGE3      0.5

void practice11(){
    char ch;
    double artichoke, beet, carrot;
    artichoke = beet = carrot = 0L;
    double price_a, postage_a, discount_a,
           price_b, postage_b, discount_b,
           price_c, postage_c, discount_c;
    discount_a = discount_b = discount_c = 0L;

    puts("Please select which you want, 'a' for artichoke, "
         "'b' for beet, 'c' for carrot, 'q' to quit:");
    while ((ch = getchar()) != 'q'){

        double temp;
        switch (ch) {
            case 'a': {
                puts("How much artichoke do you want?");
                scanf("%lf", &temp);
                getchar();
                artichoke += temp;
                break;
            }
            case 'b': {
                puts("How much beet do you want?");
                scanf("%lf", &temp);
                getchar();
                beet += temp;
                break;
            }
            case 'c': {
                puts("How much carrot do you want?");
                scanf("%lf", &temp);
                getchar();
                carrot += temp;
                break;
            }
            default:
                puts("Try again!");
                getchar();
                break;
        }
        puts("Please select which you want, 'a' for artichoke, "
             "'b' for beet, 'c' for carrot, 'q' to quit:");
    }
    if ((artichoke * ARTICHOKE) >= DISCOUNT_MIN)
        discount_a = artichoke * ARTICHOKE * DISCOUNT_RATE;
    if ((beet * BEET) >= DISCOUNT_MIN)
        discount_b = beet * BEET * DISCOUNT_RATE;
    if ((carrot * CARROT) >= DISCOUNT_MIN)
        discount_c = carrot * CARROT * DISCOUNT_RATE;

    if (artichoke <= 5 && artichoke > 0)
        postage_a = POSTAGE1;
    else if (artichoke > 5 && artichoke <= 20)
        postage_a = POSTAGE2;
    else if (artichoke > 20)
        postage_a = POSTAGE2 + (artichoke - 20) * POSTAGE3;

    if (beet <= 5 && beet > 0)
        postage_b = POSTAGE1;
    else if (beet > 5 && beet <= 20)
        postage_b = POSTAGE2;
    else if (beet > 20)
        postage_b = POSTAGE2 + (beet - 20) * POSTAGE3;

    if (carrot <= 5 && carrot > 0)
        postage_c = POSTAGE1;
    else if (carrot > 5 && carrot <= 20)
        postage_c = POSTAGE2;
    else if (carrot > 20)
        postage_c = POSTAGE2 + (carrot - 20) * POSTAGE3;

    price_a = artichoke * ARTICHOKE + postage_a - discount_a;
    price_b = beet * BEET + postage_b - discount_b;
    price_c = carrot * CARROT + postage_c - discount_c;

    printf("The details:\n");
    printf("Catagory     Unit price    Weight    Price    Discount    Postage\n");
    printf("Artichoke    %-6.2f        %-6.2f    %-6.2f   %-6.2f      %-6.2f\n",
            ARTICHOKE, artichoke, price_a, discount_a, postage_a);
    printf("Beet         %-6.2f        %-6.2f    %-6.2f   %-6.2f      %-6.2f\n",
            BEET,      beet,      price_b, discount_b, postage_b);
    printf("Carrot       %-6.2f        %-6.2f    %-6.2f   %-6.2f      %-6.2f\n",
            CARROT,    carrot,    price_c, discount_c, postage_c);
    printf("Total price: %.2f.\n", price_a + price_b + price_c);

}

