//Naziat Nowrin

#include <iostream>
using namespace std;

int main (){
    int num;
    int total= 0;
    int count;
    count = 0;


    cout << endl << "Enter numbers, 999 to quit" << endl;
    cin >> num;

    while(num != 999)
    {
        total = total + num;
        count = count+1;
    

        cout << "Number entered is: " << num << endl;
        cout << "Enter numbers, 999 to quit" << endl;
        cin >> num;

        
    }
    cout << " Total of num is : " << total << endl;
    cout << "Total numbers entered is: " << count << endl;
return 0;

}