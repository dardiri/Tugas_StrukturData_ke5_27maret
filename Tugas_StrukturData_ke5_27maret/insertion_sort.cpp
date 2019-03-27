#include <iostream>

using namespace std;

int data[10], masukan[10];
int n;

void isort()
{
 	 int temp, a, i;
 	 for(i=1;i<=n;i++)
 	 {
  	  	  temp = data[i];
  	  	  a = i -1;
		while(data[a]>temp && a>=0)
 	    {
   	   	   data[a+1] = data[a];
   	   	   a--;
		}

  	  data[a+1] = temp;
 	 }
}

main()
{
    cout<<"#######################\n";
    cout<<"#Insertion Sort Ascending#\n";
    cout<<"#######################\n\n";
    cout<<endl;
 	 cout << "Input Jumlah Data Angka:";
 	 cin >> n;
 	 cout << endl;
 	 for(int i=1; i<=n; i++)
 	 {
  	  	  cout << "Input Angka ke-" << i << ": ";
  	  	  cin >> data[i];
  	  	  masukan[i] = data[i];
 	 }

  isort();

 	 cout << "\nHasil pengurutan Ascending: " << endl;
 	 for(int i=1; i<=n; i++)
 	 {
		cout << data[i] << " ";
 	 }
 	 cout << endl;

}
