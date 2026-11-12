#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

int main()
{

  ifstream in ("hoda.txt");

  if(!in.is_open())
  {
    cout<<" error "<<endl;
  }
  else{
    cout<<" open :: perfect "<<endl;

string name;
 
vector<string> data;

while(getline (in , name))
{
    data.push_back(name);
    sort(data.begin(), data.end());

}
    in.close();


for(int i=0;   i<data.size() ;   i++)
{
    cout<<data[i]<<endl;
}















  }
















    return 0;
}
