#include <stdio.h>
#include <stdlib.h>
//generati, afisati si numarati toate solutiile:
//toate stringurile formate din primele k litere mici de lungime n
// exemplu:
//n= 3
//k= 3
//aba
//ccc
//abc

int M=0;
void bt(int k,int n,int m,int *v)
{
    if(k==n)
    {
        for(int i=0;i<n;i++)
            printf("%c ",v[i]+'a');
        printf("\n");
        M++;
        return;
    }
    for(int i=0;i<m;i++)
    {
        v[k]=i;
        bt(k+1,n,m,v);
    }
}

int main()
{
    int n,m;
    //lungime n, primele m litere
    scanf("%d %d",&n,&m);
    int *v;
    v=(int*)calloc(n,sizeof(int));
    bt(0,n,m,v);
    printf("Avem %d solutii",M);
    return 0;
}
