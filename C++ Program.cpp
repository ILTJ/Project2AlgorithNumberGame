#include <fstream>
#include <iostream>
using namespace std;

int main () {
   ifstream infile1("data1.txt");
   ifstream infile2("data2.txt");
   int i,a_score=0,b_score=0,a,b;

   cout<<"Game A B"<< endl;

   for(i=1; i<=5; i++){
      infile1 >> a;
      infile2 >> b;
      cout <<" "  << i<< ".  "<< a << " " << b;
      if ( a > b ) {
       cout << " A" << endl;
       a_score++;
       }
      else if ( a < b ) {
       cout << " B" <<endl;
       b_score++;
      }
      else {
       cout << " Draw" <<endl;
       }
}
       
       cout << endl;
       
       if ( a_score > b_score ) {
        cout << "A Won: " << a_score << "-" << b_score << endl;
        }
       else if ( a_score < b_score ) {
        cout << "A Lost: " << a_score << "-" << b_score << endl;
        } 
       else {
         cout << "Draw: " << a_score << "-" << b_score << endl;
         }

   system("pause");

   return 0;
}
