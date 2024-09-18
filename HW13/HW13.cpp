#include <iostream>
using namespace std;

int main()
{ 
    int count;
    double sum;
    double temp;

  cout << "How many temperatures will you enter? ";
  cin >> count;

    for (int i = 0; i < count; ++i) {
        cout << "Enter temperature " << (i + 1) << ": ";
        cin >> temp;
        sum += temp;
    }

    double average = sum / count;
   cout << "The average temperature is " << average << " degrees." <<endl;

    return 0;
}

