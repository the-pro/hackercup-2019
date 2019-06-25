#include<iostream>
using namespace std;
int main ()
{
  int t,b = 0,dotc=0,bc=0;
  char s[500000];
  cin >> t;
  for (int i = 0; i < t; i++)
    {
      cin >> s;
      b = 0;
      bc=0;
      dotc=0;
      for(int j=0;s[j]!='\0';j++){
          if (s[j] == 'B')
	        bc++;
	      if (s[j] == '.')
	        dotc++;
      }
	if(bc==0)
	cout<<"Case #"<<i+1<<": "<<"N"<<endl;
	else if(dotc==0)
	cout<<"Case #"<<i+1<<": "<<"N"<<endl;
	else if(bc>=0){
	    if(bc>=dotc || bc>1)
	    cout<<"Case #"<<i+1<<": "<<"Y"<<endl;
	    else if(bc<=1)
	    cout<<"Case #"<<i+1<<": "<<"N"<<endl;
    	}
	}
  return 0;
}
