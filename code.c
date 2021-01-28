/*
 * Complete the function below with 3 arguments: 
 * Size of the array (lengths_size).
 * An integer array of stick lengths (lengths). 
 * Pointer to the variable which is used to store the size of the result array.
 * 
 */
int* cutSticks(int lengths_size, int *lengths, int *result_size) 
{
  int arr[50],i=0,j,k,a=0;
	while(arr[a]!=1)
    {
      j=0;
      k=*(lengths+0);
      for(i=0;i<lengths_size;i++)
        if(k<=*(lengths+i))
          k=*(lengths+i);
      for(i=0;i<lengths_size;i++)
        if(k>=*(lengths+i) && *(lengths+i)!=0)
          k=*(lengths+i);
      for(i=0;i<lengths_size;i++)
      {
        if(*(lengths+i)!=0)
        {
          j++;
          *(lengths+i)=*(lengths+i)-k;
        }
      }
      if(j==0)
      {
        *result_size=a;
        arr[a-1]=1;
        for(i=0;i<a;i++)
          *(lengths+i)=arr[i];
        return lengths;
      }
      else
      {
        arr[a]=j;
        a++;
      }
    }
}
