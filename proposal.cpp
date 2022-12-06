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
    struct Header header = { "Dakota Leslie", "Oxford Tutorial", "Dr. Donna Bowman", "5 Dec 2022"};

    string Mentor = "Dr. Vamsi Paruchuri";

    ResearchNarrative rn = ResearchNarrative();

    LitReview lr = LitReview();

    // I have provided a visual for the expected timeframe and work progress for this project
    // The numbers at the top of the gantt chart represent weeks
    // The weeks in the chart start on the first week of christmas break and go till the start of Capstone in the Spring of 2024

    string timeframefile = "GanttChart.png";

    Bibliography bib = Bibliography();

    return 0;
}