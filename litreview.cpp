#include "litreview.h"
#include <string>

/*
    This is the literature review portion of my proposal
*/

LitReview::LitReview(){
    // A capstone project like mine stems from sources of inspiration.
    inspiration();

    // This inspiration can give us insight into different methodologies
    methodologies();

    // While creating the esolang,
    // there are some things I will need to know along the way since they are
    // integral to coding languages
    syntaxanalysis();
    assemblylanguage();
};

void LitReview::inspiration(){
    /*
        These examples help give a general idea for a starting line for the project,
        expectations and possible methodologies that you can use to reach your goal.
        They also give insight on different things to consider when starting
        a project.
    */

   // Example 1
   chicken();

   // Example 2
   chef();

   // Example 3
   brainfuck();
};

void LitReview::chicken(){
    /*
        The Chicken esolang only has one acceptable token: "Chicken".
        That is to say, a functioning chicken program only looks like a wall of chickens.
    */

   // How does chicken work?
   /*
        Chicken works with an interpreter reading a chicken file to translate
        chicken code into proper computer instruction. The way it defines what instructions
        to run is by pre-defined operation codes. The interpreter counts how many
        chickens are in each line, and that number corresponds to different operational
        codes that can easily get turned into assembly language code that a computer can
        understand very easily.
    */

   std:: string citation = "(Söderstedt)";

   // This gives me one approach of how to make my coding language function.

};

void LitReview::chef(){
    /*
        The Chef esolang manages to disguise a coding language as
        a cooking recipie. It does this by defining key words and syntax
        that can be read as cooking instructions and directly translate into 
        computer instructions. This code is more complex than chicken -- 
        which makes sense since a recipie is more complex
        than a single word. While this esolang is interesting, the main
        reason this language is a source of inspiration is because of what people
        have managed to do with chef.
    */

   std:: string citation = "(Morgan-Mar)";

   // What has been done with chef?
   /*
        Because chef's syntax looks like a cooking recipie, Mike Worth managed to
        divise a "Hello World!" recipie that could actually bake a cake. To prove that
        this recipie could actually bake a cake, Mike Worth followed the program
        and ended with a full cake that he allowed his family to try. he reported that
        his cake was well recieved by his family. 
   */

    std:: string citation = "(Worth)";

    /*
        This last source gives me a point of evidence of a greater purpose my
        esolang can have. I can design it with the purpose to make more than just
        computer instrucions. Something that can even be enjoyed by those who know
        nothing about computers!
    */
};

void LitReview::brainfuck(){
    /*
        Brainfuck was created with a specific goal in mind: to create a language with a
        small compiler. In order to do this, there needs to be a small set of key words and
        acceptable syntax. Brainfuck manages to do this with only a total of 8 accepted characters.
        Not words, not sentences, characters. The way Brianfuck works is by moving a pointer
        arround an array of memory. Symbols either move the pointer, or change the value of 
        the memory address the pointer is pointing to. Even though this is a very simplistic
        idea and implementation of code, it is considered Turing-complete.
    */

    std:: string citation = "(Raiter)";

    turingcomplete();

    /*
        Brainfuck gives me a different approach to creating a coding language. I
        can manipulate memory directly with my syntax. It also gives me the idea of
        using a compiler instead of an interpreter, like Chicken.
    */
   
}

void LitReview::turingcomplete(){
    /*
        The idea of Turing-completeness stems from Alan Turing's paper on theoretical
        Turing machines. Turing machines were very simple versions of computers as we
        know them today. They had input, output, and memory. Turing makes a conjecture
        in his paper that given infinite time and infinite memory, a turing machine can
        solve any computational problem. That conjecture is the basis of turing completeness.
        With how computer languages work nowadays, they can be very similar to turing machines
        even though they only work within computers. A coding language is said to be
        turing complete if it is able to solve any computational problem given infinite
        time and infinite memory.
    */

   std:: string citation = "(Sellin)";

    /*
        This idea of Turing completeness gives me another consideration when creating my
        language. Do I want to aim for Turing completeness, or am I ok if my language was
        made to do more limited and specific things?
    */
};

void LitReview::methodologies(){
    /*
        I stated earlier that brainfuck uses a compiler while chicken uses an interpreter,
        but what does that mean?
    */
   
    // Route 1
    compiler();

    // Route 2
    interpreter();

    /*
        These two ideas are completely differen't. However, there are some languages that
        use both at once. While there are inherent benefits and downsides to doing this --
        just as there is with using just a compiler or an interpreter -- combining these two
        methodologies currently seems outside the scope of my project, but is still something to
        consider moving forward.
    */

   std:: string citation = "(Sebsta)";

};

void LitReview::compiler(){
    /*
        A compiler reads a code file and translate's that file into an executable
        file that a computer can understand. This is done at runtime, so a compiled
        program could run much slower than an interpreted one since the compilation
        is done all at once. However, since the compiler builds a seperate runnable
        file, re-runs of a program would be faster than an interpreted program.
    */

   std:: string citation = "(\"Difference between Compiler and Interpreter\")";

};

void LitReview::interpreter(){
    /*
        An interpreter reads a code file and translate's the file line-by-line. This
        means an interpreter creates each line of machine code and executes that machine
        code while still reading and translating the file. This makes error catching much
        easier than a compiler does since errors happen and get executed on the exact line
        that was being read at that moment. An interpreter also doesn't create a seperate
        code file since the program is running during the translation. This makes each consecutive
        run of the program will take a simillar ammount of time. This makes interpreters
        overall slower than compilers.
    */

       std:: string citation = "(\"Difference between Compiler and Interpreter\")";

};

void LitReview::syntaxanalysis(){
    /*
        Syntax analysis is the process of identifying key-words and expressions within your
        coding language in order to find the meaning of the expression thus translating it
        into something the computer can understand. Syntax is how your language is designed,
        and how that design relates to its functionality. 
    */

   std:: string citation = "(Duncan)";

    /*
        Understanding the importance of syntax gives me the starting point when it comes to
        designing the language. I not only need to have an idea of what words, characters, numbers,
        etc. are important in my language and what they represent before I can even start coding the
        language. Designing the syntax is the true creation of a language, creating the compiler or
        interpreter falls into place after -- that's not to say it will be easy to code.
    */
};

void LitReview::assemblylanguage(){
    /*
        Assembly language is considered a low-level language that is typically run by
        a computer with a built in assembler. Because assembly language is assembled through
        built-in programs, your computer is essentially able to understand assembly language
        without extra work from a programmer. This means that my esolang can be translated
        into assembly language and then executed by my computer.
    */

   std:: string citation = "(\"Assembly Programming Tutorial\")";

    /*
        This gives me the end point of my translation. Anything written in my esolang
        should be able to get translated into assembly language. This will allow my
        esolang to actually function as a coding language.
    */
};

void LitReview::conclusion(){
    /*
        The process of creating an esolang is a long one with many paths and conisderations.
        However, from my research, I found a starting point, inspiration that gives me ideas of
        what these different paths I may go down look like, and important ideas I need to consider
        while creating my language. However, everything that this reasearch has showed me only relates to
        the start of my journey. As I start on my adventure, I will likely need to find more
        sources to pull me out of some mental blocks, issues, or general spaces of confusion.
    */
};