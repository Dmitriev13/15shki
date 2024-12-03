#include <algorithm>

void RandZap(int** mas, int n, int m)
{
	int t = 0;
	int a[16] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	random_shuffle(&a[0], &a[16]);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			 mas[i][j]=a[t];
			 t += 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (mas[i][j]<10)
			{
				cout <<" " << mas[i][j] << " ";
			}
			else
			{
				cout << mas[i][j] << " ";
			}
			
		cout << "\n";
	}
}




bool ProvPob(int** mas)
{
int t=0;
int r=1;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < m; j++)
	{

		if( mas[i][j]==t)
		  {
              		r=r*1;
			t+=1;
           	  }
          	else
           	  {
              		r=r*0;
            	  }
	
	}
	return r;
}	
}




