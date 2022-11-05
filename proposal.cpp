#include <iostream>
#include "research_narrative.h"
#include "litreview.h"

using namespace std;

struct Header {
    string name;
    string course;
    string prof;
    string date;
};

int main() {
    struct Header header = { "Dakota Leslie", "Oxford Tutorial", "Dr. Donna Bowman", "4 Nov 2022"};

    ResearchNarrative rn = ResearchNarrative();
    // TO-DO: Fully implement the research narrative part of the proposal

    LitReview lr = LitReview();

    return 0;
}