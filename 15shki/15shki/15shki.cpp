void RandZap(int** mas)
{

}



bool ProvPob(int** mas)
{
  int r=1;
    for (int i=0;i<16;i++)
        {
            if (mas[i]==i+1)
            {
              r=r*1;
            }
          else
            {
              r=r*0;
            }
          
        }
  return r;
}
