main()
{
    int yrs;
    float purchase_price,depriciation,salvage_value;
    printf("enter the purchase price,years of service and the annual depreciation of an item.\n");
    scanf("%f %d %f",&purchase_price,&yrs,&depriciation);
    salvage_value=purchase_price-(depriciation*yrs);
    printf("the salvage value of an item is %f",salvage_value);
    getch();
}
