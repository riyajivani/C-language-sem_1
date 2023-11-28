/*.............INVESTMENT PROBLEM..............*/
#define PERIOD 10
#define PRINCIPAL 5550.00
/*..............MAIN PROGRAM BEGINS............*/
main()
{/*.............DECLARATION STATEMENT..........*/
    int year;
    float amount,value,inrate;
    /*..........ASSIGNMENT STATEMENT...........*/
        amount=PRINCIPAL;
        inrate=0.11;
        year=1;
    /*..........COMPUTATION STATEMENT..........*/
    /*..........COMPUTATION USING while LOOP...*/
        while(year<=PERIOD)
        {
            printf("%2d %8.2f\n",year,amount);
            value=amount+inrate*amount;
            year=year+1;
            amount=value;
        }
    /*..........while LOOP ENDS................*/
}
    /*..........PROGRAM ENDS...................*/
