#include <iostream>
#include <cmath>
using namespace std ;

void hanoi(int n, char Source, char Temp, char Ending){
  if(n==1)
    cout << "Move disk from " << Source << " to " << Ending << "\n" ;
  else {
    hanoi(n-1, Source, Ending, Temp) ;
    cout << "Move disk from " << Source << " to " << Ending << "\n" ;
    hanoi(n-1, Temp, Source, Ending) ;
    }
}

int main(){
  int n_disk ;
  cout << "Number of disks: " ;
  cin >> n_disk ;
  hanoi(n_disk, 'A', 'B', 'C') ;
  cout << ( pow(2,n_disk) - 1 ) << " moves. \n" ;
}
