
#include <stdio.h>
int max(int ma[],int n)
{ int k=ma[0];
 for(int i=1;i<n;i++)
 { if(ma[i]>k)
   k=ma[i];
 }
 return k;
}
int min(int mi[], int n)
{ int k=mi[0];
 for(int i=1;i<n;i++)
 { if(mi[i]<k)
   k=mi[i];
 }
 return k;
}

float average(int av[], int n)
{ int sum=0;
for(int i=0;i<n;i++)
{sum=sum+av[i];
}
float averag=(float)(sum)/n;

return averag;
}


int mode(int mod[], int n)
{ 
    int k=max(mod,n);
    int m=min(mod,n);
    int l=k-m+1;
    int A[l];
int B[l];
    int j=0;
    for(int i=m;i<=k;i++)
    { A[j]=i;j++;}
    for(int p=0;p<l;p++)
    {int c=0;
    for(int q=0;q<n;q++)
    {if(A[p]==mod[q])
        c++;
    } if(c==0)
        B[p]=0;
        else
            B[p]=c;
    }
    int z;
    int h=max(B,l);
    for(int r=0;r<l;r++)
    {if(B[r]==h)
        z=A[r];
    }

    return z;
} 


int factors(int n, int fac[])
{int k=0;
    int i=2;int j=0;
    while(n!=1)
      {  if(n%i==0)
        { fac[j]=i;
        n=n/i;
        k++;j++;
        }
        else 
      {      i++;}
    }

      return k;

}
