#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <cstring>

namespace dipper {
	std::string name = "HeeSung Kim";
	std::string gender = "male";
	std::string identity = name + gender;
	std::string word;
}



class Widget {
public:
	virtual int f() { return 1; }
	};
class Gadget : public Widget {
public:
	virtual int f() { return 2; }
};
class Gizmo : public Widget {
public:
	virtual int f() { return 3; }
};
void do_it(Widget* w) {
	std::cout << w->f() << " ";
}




int main() {

	std::vector<Widget*> widgets;
	Widget wid;
	Gadget gad;
	Gizmo giz;
	widgets.push_back(&wid);
	widgets.push_back(&gad);
	widgets.push_back(&giz);
	for (size_t i = 0; i < widgets.size(); i++)
		do_it(widgets[i]);
	std::vector<int> k;
	std::cout << dipper::identity;
}
