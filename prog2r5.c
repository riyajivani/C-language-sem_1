int main()
{
    float rice,sugar;
    printf("enter the price of 1 kg rice and 1 kg sugar in RS.\n\n");
    scanf("%f %f",&rice,&sugar);
    printf("\n\n");
    printf("***LIST OF ITEMS***\n");
    printf("Item      Price\n");
    printf("Rice     RS. %5.2f\n",rice);//price of 1 kg rice is RS. 16.75
    printf("Sugar    RS. %5.2f\n",sugar);//price of 1 kg sugar is RS. 15.00
    return 0;
}
