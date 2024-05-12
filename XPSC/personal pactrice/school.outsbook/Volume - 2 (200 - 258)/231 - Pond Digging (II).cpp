#include <iostream>
using namespace std;

int main()
{
    int length, width, a, b;
    cin >> length >> width >> a >> b;

    int plot_area = (length * width);         // Calculate the area of the rectangular plot
    int inner_area = a * b;                 // Calculate the area of the inner rectangle
    int edge_area = plot_area - inner_area; // Calculate the area of the edge

    cout << edge_area << endl; // Output the area of the edge

    return 0;
}
