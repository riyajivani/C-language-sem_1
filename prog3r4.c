main()
{
    float len,wid,area,perimeter;
    printf("please enter the length and width of rectangle:\n\n");
    scanf("%f %f",&len,&wid);
    printf("Length = %f and width = %f\n\n",len,wid);
    area=len*wid;
    perimeter=2*(len+wid);
    printf("area of rectangle is %f\n\n",area);
    printf("perimeter of rectangle is %f\n\n",perimeter);
    getch();
}
