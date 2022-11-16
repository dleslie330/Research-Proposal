#include <iostream>
#include "research_narrative.h"
#include "litreview.h"
#include "bibliography.h"

using namespace std;

struct Header {
    string name;
    string course;
    string prof;
    string date;
};

int main() {
    struct Header header = { "Dakota Leslie", "Oxford Tutorial", "Dr. Donna Bowman", "18 Nov 2022"};

    ResearchNarrative rn = ResearchNarrative();

    LitReview lr = LitReview();

    Bibliography bib = Bibliography();

    return 0;
}