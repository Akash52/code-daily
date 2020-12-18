#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    map<int, string> months;

    months.insert(1, "January");
    months.insert(2, "February");

    copy(months.begin(), months.end(), ostream_iterator<pair<int, string> >(cout, "; "));
}
