#include "research_narrative.h"
#include <string>

/*
    This is the research narrative part of the proposal.
*/

ResearchNarrative::ResearchNarrative(){
    /*
        My project is to undertake the creation of an esoteric coding language.
        This subject brings up the first question to answer: What is an esoteric
        coding language (esolang)? Grand Darling defines esolangs as "A segment
        of programming languages that are not build for usability, but rather for
        entertainment, artistic intent, or to prove a concept" ...
    */

    std:: string citation = "(Darling)";

    /*
        ... which is to say: they are a bit goofy. The definition says htat esolangs
        aren't built for usability. While this statement is true, it does not mean that
        you cannot use esolangs. The reason esolangs are not used is typically due to the
        syntax that gives teh esolangs their character. Some of the esolangs that isnpired
        me to do this project explain that last statement by themselves.
    */

    /*
        These examples include -- but are not limited to -- Chicken, Chef, and Brainfuck.
        The Chicken esolang's syntax only takes into account spaces, newline characters,
        and the word "chicken." While this language is fully functional and able to write
        a "Hello World!" program, all a user can see is a wall of chickens. The view of this
        wall from my perspective is quite daunting, but even more intriguing. 
    */
    
    chicken();
    
    /*
        The Chef esolang -- to the "untrained eye" -- looks like any old recipe you might find in
        a cook book. That is, this language is built off of the same instructions a cook will read
        while creating a recipie. However, it is a functional coding language that someone invented.
        My favorite part of this esolang is the fact that there is a functional "Hello World!" program
        that someon ewrote, and then used that recipe to bake a real edible cake"
    */

    std:: string citation = "(Worth)";

    chef();

    /*
        For the Brainfuck esolang, the only valid characters you can use to write code are
        "[" "]" "," "." "+" "-" ">" "<".
    */

    std:: string citation = "(Raiter)";

    //  When combined to form code, these symbols make absolutely no sense.

    brainfuck();

    /*
        These languages are anything but readable, but they are all able to give computers
        instructions. Brainfuck is even considered Turing complete -- which means if the
        language was given an infinite amount of time and an infinite amount of storage, it
        would be able to solve any possible problem -- meaning it could be used for day-to-day
        coding. However, none of these languages are or should be used for day-to-day coding because
        of how hard they are to understand from their syntax.
    */

    /*
        As you can see from these examples, esolangs are goofy languages that are also
        functional computer instructions. This leaves the project comfortably within the realm
        of Computer Science -- my main discipline. That being said, this topic is not limited within
        the field. The vary nature of computer science itself is heavily interdisciplinary, and a goofy
        topic likethis can be enjoyed by anyone. This topic also lends greater insight into how
        computers and their programs operate which is a good thing for anyone living it today's
        society to know. Through this project I hope to better understand what makes up a coding
        language, what kinds of problems come up when defining code syntax and how to solve those
        problems, how computers understand code, and to introduce a whacky new esolang into the niche
        esolang community for others to laugh at and play with as a interactive piece of art.
    */

    /*
        This project in its current state can take one of two routes going forward. I can create a language
        that reads the syntax to call operational ocdes (opcodes), like chicken, or I can use syntax
        to move a pointer around memory and manipulate data at that memory address, like Brainfuck. The
        choice for this answer will either lead to me compiling the code into a different language to run
        the instruction, or interpreting the code into something the computer can understand. however,
        I need to decide what kind of theme my eslang will have before I can make a decision on which route
        to take. One of the most importnt parts of this project will be the engineering journal I will be 
        keeping in order to document my process. It will explain all the issues I run into, how I solve them, 
        what choices I had to make and why I chose one option over another, as well as helping me keep an 
        official documentation of my language to allow other people to see my esolang and understand it too.
    */

    /*
        Completing this project will likely be done solely on personal devices. I will also limit the ideas
        for my project as I get a better vision for it in order to avoid turning this project into an impossible
        task. Development of my language will be done in VS Code and publicly updated onto my GitHub profile to
        allow easy viewing, commenting, and criticizing for interested parties with the goal of public opinion
        and criticisim improving my esolang. I will likely make use of either Assembly Language or the C programming
        language to translate the syntax of my esolang into instructions a computer can understand. There are
        many more tools and ideas that I am unaware of, but it is impossible to know what those might be until
        development of my esolang starts.
    */
};

void ResearchNarrative::chicken(){
    // Example of a "Hello World!" program in Chicken:

    /*
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken
        chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken

        chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken

        chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken
        chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken

        chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken

        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken

        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken chicken
        chicken chicken chicken chicken chicken chicken
    */

    std:: string citation = "(Söderstedt)";

    /*
        This program, run in a chicken friendly coding environment, would output "Hello world" to your computer.
    */
};

void ResearchNarrative::chef(){
    // Example of a "Hello World!" program in chef:

    /*
        Ingredients.
        33 g chocolate chips
        100 g butter
        54 ml double cream
        2 pinches baking powder
        114 g sugar
        111 ml beaten eggs
        119 g flour
        32 g cocoa powder
        0 g cake mixture

        Cooking time: 25 minutes.

        Pre-heat oven to 180 degrees Celsius.

        Method.
        Put chocolate chips into the mixing bowl.
        Put butter into the mixing bowl.
        Put sugar into the mixing bowl.
        Put beaten eggs into the mixing bowl.
        Put flour into the mixing bowl.
        Put baking powder into the mixing bowl.
        Put cocoa  powder into the mixing bowl.
        Stir the mixing bowl for 1 minute.
        Combine double cream into the mixing bowl.
        Stir the mixing bowl for 4 minutes.
        Liquify the contents of the mixing bowl.
        Pour contents of the mixing bowl into the baking dish.
        bake the cake mixture.
        Wait until baked.
        Serve with chocolate sauce.

        chocolate sauce.

        Ingredients.
        111 g sugar
        108 ml hot water
        108 ml heated double cream
        101 g dark chocolate
        72 g milk chocolate

        Method.
        Clean the mixing bowl.
        Put sugar into the mixing bowl.
        Put hot water into the mixing bowl.
        Put heated double cream into the mixing bowl.
        dissolve the sugar.
        agitate the sugar until dissolved.
        Liquify the dark chocolate.
        Put dark chocolate into the mixing bowl.
        Liquify the milk chocolate.
        Put milk chocolate into the mixing bowl.
        Liquify contents of the mixing bowl.
        Pour contents of the mixing bowl into the baking dish.
        Refrigerate for 1 hour.
    */

    /*
        This program, run in an environment compatible with chef, would output "Hello world!" to your computer.
        The real cake made by this is also apparently pretty tasty!
    */

   std:: string citaiton = "(Worth)";
};

void ResearchNarrative::brainfuck(){
    // Example of a "Hello World!" program in Brainfuck:

    /*
        ++++++++++[>+++++++>++++++++++>+++>+<<<<-]
        ++.>+.+++++++..+++.>++.<<+++++++++++++++.>
        .+++.------.--------.>+.>.
    */

    /*
        This program, run in an environment suited for Brainfuck, would output "Hello, World!" to your computer.
        Here the line breaks don't impact the code since the language doesn't account for whitespaces.
    */

    std:: string citation = "(Oberhaus)";
};