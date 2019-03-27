#include <iostream>
#include <conio.h>

using namespace std;

main()
{

    int n,k,l,z,pos,tampung;
    int nilai[20];

    cout<<"#######################\n";
    cout<<"#Insertion Sort Ascending#\n";
    cout<<"#######################\n\n";

    cout<<"MInput Jumlah Data Angka : ";
    cin>>n;
    cout<<"======================="<<endl;
    for (int k=0; k<n; k++)
    {
        cout<<"Input Angka ke- "<<(k+1)<<" : ";
        cin>>nilai[k];
    }
   cout<<endl;
   cout<<"Sebelum Sorting"<<endl;
   cout<<"====================="<<endl;
   for (int k=0; k<n; k++)
   {
        cout<<nilai[k]<<endl;
   }
   cout<<endl;

for (int k=0; k<n-1;++k)
 {
  pos=k;
  for (int l=k+1; l<n;++l)
    {
        if (nilai[l]<nilai[pos])
        {
            pos=l;
        }
    }
  if (pos !=k)
    {
        tampung=nilai[pos];
        nilai[pos]=nilai[k];
        nilai[k]=tampung;
    }
  cout<<"langkah ke "<<k+1<<endl;
  cout<<"-----------------------"<<endl;
    for (int z=0; z<n;++z)
    {
        cout<<nilai[z]<<endl;
    }
  cout<<endl;
 }

    cout<<"Setelah sorting : \n";
    cout<<"======================="<<endl;
    for (int k=0; k<n;++k)
    {
        cout<<nilai[k]<<endl;
    }

getch();
}
