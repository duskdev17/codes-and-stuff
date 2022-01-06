#include<iostream>
#include<climits>
#include<bits/stdc++.h>

using namespace std;

void Merge(int a[],int p,int q1,int q2,int r);
void Mergesort(int a[],int p,int r);

int main()
{
    int a[9]={9,8,7,6,5,4,3,2,1};

    Mergesort(a,0,8);

    cout<<"Sorted:";
    for(int i=0; i<9; i++)
    {
        cout<<a[i]<<" ";
    }

}

void Merge(int a[],int p,int q1,int q2,int r)
{
    int n1=(q1-p+1);
    int n2=(q2-q1);
    int n3=(r-q2);
    int left[n1+1],middle[n2+1],right[n3+1];

    for(int i=0; i<n1; i++)
        left[i]=a[p+i];
    left[n1]=INT_MAX;


    for(int j=0; j<n2; j++)
        middle[j]=a[q1+j+1];
    middle[n2]=INT_MAX;


    for(int m=0; m<n3; m++)
        right[m]=a[q2+m+1];
    right[n3]=INT_MAX;


    int i=0,j=0,l=0,k;

    for(k=p; k<=r; k++)
    {
        if(left[i]<=middle[j] && left[i]<=right[l] )
        {
            a[k]=left[i];
            i++;
        }
        else if (middle[j]<=left[i] && middle[j]<=right[l])
        {
            a[k]=middle[j];
            j++;
        }
        else
        {
            a[k]=right[l];
            l++;
        }
    }

}
void Mergesort(int a[],int p,int r)
{
    if(p<r)
    {
        int q1=p+((r-p)/3);
        int q2=p+1+2*((r-p)/3);

        Mergesort(a,p,q1);
        Mergesort(a,q1+1,q2);
        Mergesort(a,q2+1,r);

        Merge(a,p,q1,q2,r);
    }
}
