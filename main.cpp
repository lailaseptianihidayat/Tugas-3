#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  int terbesar;
  
  cout << "Masukkan bilangan pertama a: ";
  cin >> a; 
    
  cout << "Masukkan bilangan kedua (b): ";
  cin >> b;
    
  cout << "Masukkan bilangan ketiga (c): ";
  cin >> c;
    
  
    if (a >= b && a >= c) 
    {
        terbesar = a;
    } 
    else if (b >= a && b >= c) 
    {
        terbesar = b;
    } 
    else 
    {
        terbesar = c;
    }

    // Menampilkan hasil
    cout << "Dari bilangan " << a << ", " << b << ", dan " << c << endl;
    cout << "Bilangan terbesar adalah: " << terbesar << endl;

    return 0;
}

