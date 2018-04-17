#include <iostream>

using std::cout;
using std::endl;

class Widget 
{
public:
    Widget() { cout << "Widget()" << endl; }
    Widget(const Widget &) { cout << "Widget(const Widget &)" << endl; }
    Widget(Widget &&) { cout << "Widget(Widget &&)" << endl; }
    Widget& operator=(const Widget &) { cout << "Widget& operator=(const Widget &)" << endl; }
    Widget& operator=(Widget &&) { cout << "Widget& operator=(Widget &&)" << endl; }
    ~Widget() { cout << "~Widget()" << endl; }    
};

Widget getWidget() 
{
    return Widget();
}


int main() {

    Widget a = getWidget();

    return 0;

}
