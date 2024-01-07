#include <stdio.h>
#define MAX 100


void ReadFile(char *fname, int a[], int &n)
{
	FILE*fp=fopen(fname, "r");
	if(fp==NULL)
		printf("Khong mo duoc file!\n");
	else
	{
		fscanf(fp, "%d", &n);
		//Doc cac phan tu cua mang
		for(int i=0; i<n; i++)
			fscanf(fp, "%d ", &a[i]);
		fclose(fp);
	}
	printf("Mang doc tu file: \n");
	for(int i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
}

void NhapMang(int a[], int &n) 
{
	printf("Hay nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nNhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nMang duoc nhap tu ban phim: \n");
    for (int i = 0; i < n; i++) 
	{
    printf("%5d", a[i]);
	}
	printf("\n");
}

void BubbleSort(int a[], int n) 
{
  for (int i =0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++) 
	{
      if (a[j] > a[j + 1]) 
	  {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        printf("\nDoi vi tri phan tu thu %d và phan tu thu %d\n", j + 1, j + 2);
        for (int k = 0; k < n; k++) 
		{
    		printf("%5d", a[k]);
    	}
    	printf("\n\n");
      }
    }
  }
}

void SelectionSort(int a[], int n) 
{
  for (int i = 0; i < n - 1; i++) 
  {
    int min = i;
    for (int j = i + 1; j < n; j++) 
	{
      if (a[j] < a[min]) 
	  {
        min = j;
      }
    }
    if(min !=i)
    {
    	int temp = a[i];
    a[i] = a[min];
    a[min] = temp;
    printf("\nDoi vi tri phan tu thu %d và phan tu thu %d\n", i+1, min+1);
    for (int k = 0; k < n; k++) 
	{
   		printf("%5d", a[k]);
   	}
   	printf("\n\n");
	}
  }
}

void InsertionSort(int a[], int n) {
  int i, j, key;

  for (i = 1; i < n; i++) {
    key = a[i];
    j = i - 1;

    while (j >= 0 && a[j] > key) {
    	int temp = a[j];
    	a[j] = a[j + 1];
        a[j + 1] = temp;
    	j--;
    	printf("\nDoi vi tri phan tu thu %d và phan tu thu %d\n", j + 2, j + 3);
        for (int k = 0; k < n; k++) 
		{
    		printf("%5d", a[k]);
    	}
    	printf("\n\n");
    }

    a[j + 1] = key;
  }
}

int main()
{
	int a[MAX], n, o, o1;
	printf("Hello, ban muon chon giai thuat sap xep nao: \n");
	printf("Neu chon Bubble Sort hay nhan phim 1.\n");
	printf("Neu chon Selection Sort hay nhan phim 2.\n");
	printf("Neu chon Intertion Sort hay nhan phim 3.\n");
	do{
		printf("Hay dua ra lua chon cua ban nao: ");
		scanf("%d", &o);
	}while(!(o>=1&&o<=3));
	if(o==1)
	{
		printf("\n\n");
		printf("*****   **  **  *****   *****   **      ******       *****   ****   *****   ******\n");
		printf("**  **  **  **  **  **  **  **  **      **          **      **  **  **  **    **  \n");
		printf("*****   **  **  *****   *****   **      ******       ****   **  **  *****     **  \n");
		printf("**  **  **  **  **  **  **  **  **      **              **  **  **  **  **    **  \n");
		printf("*****   ******  *****   *****   ******  ******      *****    ****   **  **    **  \n");
		printf("\n\nNeu chon doc mang tu file hay nhan phim 1.\n");
		printf("Neu muon nhap mang tu bàn phim hay nhan phim 2.\n");
		do{
			printf("Hay dua ra lua chon cua ban: ");
			scanf("%d", &o1);
		}while(!(o1>=1&&o1<=2));
		if(o1 == 1)
		{
			ReadFile("D:\\TTCoSo\\array.txt",a,n);
			BubbleSort(a,n);
			printf("\nMang sau khi duoc sap xep: ");
				for (int i = 0; i < n; i++)
				{
    				printf("%5d", a[i]);
				}
				printf("\n");
		}
		else if(o1 == 2)
		{
			NhapMang(a,n);
			BubbleSort(a,n);
			printf("\nMang sau khi duoc sap xep: ");
				for (int i = 0; i < n; i++)
				{
    				printf("%5d", a[i]);
				}
				printf("\n");
		}
	}
	else if(o==2)
		{
			printf("\n\n");
			printf(" ****   ******  **      ******   *****  ******  **   ****   **  **       *****   ****   *****   ******\n");
			printf("**      **      **      **      **        **    **  **  **  *** **      **      **  **  **  **    **  \n");
			printf(" ****   ******  **      ******  **        **    **  **  **  ******       ****   **  **  *****     **  \n");
			printf("    **  **      **      **      **        **    **  **  **  ** ***          **  **  **  **  **    **  \n");
			printf("*****   ******  *****   ******   *****    **    **   ****   **  **      *****    ****   **  **    **  \n");
			printf("\n\nNeu chon doc mang tu file hay nhan phim 1.\n");
			printf("Neu muon nhap mang tu bàn phim hay nhan phim 2.\n");
			do{
				printf("Hay dua ra lua chon cua ban: ");
				scanf("%d", &o1);
			}while(!(o1>=1&&o1<=2));
			if(o1 == 1)
			{
				ReadFile("D:\\TTCoSo\\array.txt",a,n);
				SelectionSort(a,n);
				printf("\nMang sau khi duoc sap xep: ");
				for (int i = 0; i < n; i++)
				{
    				printf("%5d", a[i]);
				}
				printf("\n");
			}
			else if(o1 == 2)
			{
				NhapMang(a,n);
				SelectionSort(a,n);
				printf("\nMang sau khi duoc sap xep: ");
				for (int i = 0; i < n; i++)
				{
    				printf("%5d", a[i]);
				}
				printf("\n");
			}
		}
	else if(o==3)
	{
		printf("\n\n");
		printf("  **  **  **   *****  ******  *****   ******  **   ****   **  **       *****   ****   *****   ******\n");
		printf("  **  *** **  **      **      **  **    **    **  **  **  *** **      **      **  **  **  **    **  \n");
		printf("  **  ******   ****   ******  *****     **    **  **  **  ******       ****   **  **  *****     **  \n");
		printf("  **  ** ***      **  **      **  **    **    **  **  **  ** ***          **  **  **  **  **    **  \n");
		printf("  **  **  **  *****   ******  **  **    **    **   ****   **  **      *****    ****   **  **    **  \n");
		printf("\n\nNeu chon doc mang tu file hay nhan phim 1.\n");
		printf("Neu muon nhap mang tu bàn phim hay nhan phim 2.\n");
			do{
				printf("Hay dua ra lua chon cua ban: ");
				scanf("%d", &o1);
			}while(!(o1>=1&&o1<=2));
			if(o1 == 1)
			{
				ReadFile("D:\\TTCoSo\\array.txt",a,n);
				InsertionSort(a,n);
				printf("\nMang sau khi duoc sap xep: ");
				for (int i = 0; i < n; i++)
				{
    				printf("%5d", a[i]);
				}
				printf("\n");
			}
			else if(o1 == 2)
			{
				NhapMang(a,n);
				InsertionSort(a,n);
				printf("\nMang sau khi duoc sap xep: ");
				for (int i = 0; i < n; i++)
				{
    				printf("%5d", a[i]);
				}
				printf("\n");
			}
	}
	
	
	return 0;
}
