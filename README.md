Credit to jstmax for the crackme challenge. Link: https://crackmes.one/crackme/670f88989b533b4c22bd14f9

So the challenge is to reverse engineer a purposely poorly designed key generator.

You can use any Reverse Engineering tool, I used Ghidra because it is simple to use.

The reason why this is not a good way to generate a randomize key is that rand() in C/C++ is deterministic, it uses a simple linear congruential generator with a low-quality randomness and small period which means it repeats often.
This means that if you can acquire the seed then the code generate from that seed is always the same.
To improve upon this, avoid using the rand() function and switch to something more robust like the Mersenne Twister PRNG (std::mt19937) which is a lot better at generating random numbers, you would also need more complex way of generating a seed like 
using the current time of the system server.
