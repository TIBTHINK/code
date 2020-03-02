// add some librays my guy
#include "CLI11.hpp"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <time.h>
#include <stdio.h>
#include <iterator>


// define some stuff
#define MULTI_LINE(a) #a


// std time
using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using namespace std;


// Forward declare the slow_print function
void slow_print(const string&, unsigned int);
void sleepcp(int milliseconds);
#define clear() printf("\033[H\033[J")

// Cross-platform sleep function
void sleepcp(int milliseconds) 
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
    }
}

// lizard bro
void lizard(void)
{
    string lizard = "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n:::::::::::::::::::::::::::::::::://+++ooooooooooooooooo++++////////::::::::::::::::::::::::::::::::\n::::::::::::::::::::::::::::::/+ooooooooooooooooooooooooooooooooooooo/::::::::::::::::::::::::::::::\n:::::::::::::::::::::::::::/+ooooooooooooooooooooooooooooooooooooooooo/:::::::::::::::::::::::::::::\n::::::::::::::::::::::/yydNNdooooooooooooossssooooooooooooooooo+////+oo/::::::::::::::::::::::::::::\n:::::::::::::::::::::sNMMMMNdooooooooooosmMMMMmsooooooooooooooo+////+ooo+:::::::::::::::::::::::::::\n::::::::::::::::::/+osyyyyssoooooooooooohMMMMMMhoooooooooooooooo++++oooooo/:::::::::::::::::::::::::\n:::::::::::::::/++ooooooooooooooooooooooohmdhhysooooooooooooooooooooooooooo:::::::::::::::::::::::::\n:::::::::::::/+oooooooooooooooooooooooooooooooooooooooooo++/++ooooooooooooo+::::::::::::::::::::::::\n::::::::::::+ooooooooooooooooooooooooooooooooooooooooooo+/////+o+++ooooooooo+:::::::::::::::::::::::\n:::::::::::+ooooooooooooooooooooooooooooooooooooooooooooo+///+o/////+oooooooo:::::::::::::::::::::::\n::::::::::+oooooooooooooooooooooooooooooooooooooooooooooooooooo//////oooooooo+::::::::::::::::::::::\n::::::::::oooooooooooooooooooooosoooooooooooooooooooo////+ooooo+///+oooooooooo/:::::::::::::::::::::\n::::::::::/+++oooooooooooooooooooooooooooooooooooooo//////ooooooooooooooooooooo:::::::::::::::::::::\n:::::::::::::::///++oooooooooooooooooooooooooooooooo+/////ooooooooooooooooooooo+::::::::::::::::::::\n:::::::::::::::::::::://////+++++++++++++++++++ooooooo+++ooooooooooooooooooooooo/:::::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::+oooooooo++ooooooooo+++ooooooooo+:::::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::/oooooo/////+ooooo+////+ooooooooo:::::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::ooooo+//////oooooo////+ooooooooo:::::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::/ooooo+///+oooooooo++ooooooooooo:::::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::+oooooooooooooooooooooooooooooo+::::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::+oooooooooooooooooooooooooooooo+:::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::+ooooooooo+////+ooooooooooooooo:::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::::oooooooo+//////ooo+////+oooooo:::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::::+oooooooo+////+ooo//////+ooooo:::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::::oooooooooooooooo+///////ooooo:::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::::ooooooooooooooooo//////+ooooo:::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::::/ooo++//+oooooooooo++++ooooooo:::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::::+oo+//////ooooooooooooooooooo/:::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::::ooo///////+oooooooooooooooooo/:::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::::ooo///////+oooooooooooooooooo/:::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::/ooo///////ooooooooooooooooooo+:::::::::::::::::\n::::::::::::::::::::::::::::::::::::::::::::::::::::ooooo/////+oooooooooooooooooooo:::::::::::::::::\n:::::::::::::::::::::::::::::::::::::::::::::::::::+ooooooo+ooooooooooooooooooooooo/::::::::::::::::\n//////////////////////////////////////////////////+osssssssssssssssssssssssssssssss/////////////////\n+++++++++++++++++++++++++++++++++++++++++++++++++oyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyo++++++++++++++++\n";
    slow_print(lizard, 5);
}
//text thing
int text(void)
{
    clear();
    sleepcp(1000);
    string one = "hey there friend\n\n";
    slow_print(one, 50);
    sleepcp(5000);
    string two = "i know you've been having some troubles lately\n\n";
    slow_print(two, 50);
    sleepcp(4140);
    string three = "be the person i know you can be\n\n";
    slow_print(three, 50);
    sleepcp(4800);
    string four = "dont leave anything up to chance\n\n";
    slow_print(four, 50);
    sleepcp(9000);
    string five = "i belive in you pal\n\n";
    slow_print(five, 50);
    sleepcp(4730);
    string six = "we ALL belive in you\n\n";
    slow_print(six, 50);
    sleepcp(5070);
    string seven = "ur a winner kiddo.\n";
    slow_print(seven, 50);
    string eight = "dont you ever forget\n\n";
    slow_print(eight, 50);
    sleepcp(6000);
    lizard();
    sleepcp(20000);
    clear();
    return 0;
}

// the magic dude
int main(int argc, char **argv) {
	using std::cout;
    using std::endl;
	CLI::App app{"a simple program to run in Linux when you don't feel loved"};
	
	/// [define]
	bool flag_bool;
	app.add_flag("-v, --version", flag_bool, "gives the version of love");

	/// [define]
	
	/// [parser]
	try {
	    app.parse(argc, argv);
	} catch (const CLI::ParseError &e) {
	    return app.exit(e);
	}
	/// [parser]
	
	/// [usage]
	if(flag_bool)
		cout << "V2.3" << endl;
  else(void)
    text();
	/// [usage]
}




// Implement the slow_print function
/**
 * Function to print each character in a string with a delay (a "typewriter" effect)
 * @param message         The string to print
 * @param millis_per_char Milliseconds to take to print each character
 */
void slow_print(const string& message, unsigned int millis_per_char)
{
    // Range loops are "for each" constructs; here: for each character in the string
    for (const char c: message)
    {
        // flush is used to make sure the buffer is emptied to the terminal immediately
        cout << c << flush;

        // Ask the thread to sleep for at least n millis.
        sleep_for(milliseconds(millis_per_char));
    }
}
