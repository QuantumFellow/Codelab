#include <iostream>
#include <string>
using namespace std;



int main() {
    double totalsqft;
    double paintneeded;
    const int COVERAGE = 350;
    int ilength;
    int iwidth;
    int iheight;
    char ceiling;
    int window;
    int door;

    cout << "Please state length of wall rounded to the nearest full number (ft)." << endl;
    cin >> ilength;
    cout << "Please state width of wall rounded to the nearest full number (ft)." << endl;
    cin >> iwidth;
    cout << "Please state length of wall rounded to the nearest full number (ft)." << endl;
    cin >> iheight;
    cout << "How many windows?" << endl;
    cin >> window;
    cout << "How many doors?" << endl;
    cin >> door;
    cout << "Do you want to include the ceiling in this calculation? Y or N" << endl;
    cin >> ceiling;
    if (ceiling == 'Y') {
        totalsqft = ((2 * ((ilength * iwidth) + (iwidth * iheight))) + (ilength * iheight)) - (15 * window) - (20 * door);
        paintneeded = totalsqft / COVERAGE;
        cout << ilength;
        cout << " Ft long" << endl;
        cout << iwidth; 
        cout << " Ft wide" << endl;
        cout << iheight;
        cout << " Ft tall" << endl;
        cout << "You need ";
        cout << paintneeded;
        cout << " gallons" << endl ;
    }
    else if (ceiling == 'N') {
        totalsqft = (2 * ((ilength * iheight) + (iwidth * iheight))) - (15 * window) - (20 * door);
        paintneeded = totalsqft / COVERAGE;
        cout << ilength;
        cout << " Ft long" << endl;
        cout << iwidth;
        cout << " Ft wide" << endl;
        cout << iheight;
        cout << " Ft tall" << endl;
        cout << "You need ";
        cout << paintneeded;
        cout << " gallons" << endl;


    }
    else {
        cout << "Insufficient input";


    }
    return 0;
}