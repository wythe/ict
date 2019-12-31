#include "ictunit.h"
#include <osstream.h>

void ict_unit::osstream() {
    ict::osstream os;
    std::ostringstream sos;
    auto words = std::vector<std::string>{
        "zymosan",     "zymosans",      "zymoscope",    "zymoses",
        "zymosimeter", "zymosis",       "zymosterol",   "zymosthenic",
        "zymotechnic", "zymotechnical", "zymotechnics", "zymotechny",
        "zymotic",     "zymotically",   "zymotize",     "zymotoxic",
        "zymurgies",   "zymurgy",       "zythem",       "zythum",
        "zyzzyva",     "zyzzyvas"};

    for (auto &i : words) {
        os << i;
        sos << i;
        IT_ASSERT(os.str() == sos.str());
    }
}

int main(int, char **) {
    ict_unit test;
    ict::unit_test<ict_unit> ut(&test);
    return ut.run();
}
