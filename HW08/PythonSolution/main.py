#! /usr/bin/python
# use python main.py <num_cards> to run the code

import sys
import riffle

if __name__ == "__main__":
    if (len(sys.argv) != 2):
        sys.exit('need one number')
    k = int(sys.argv[1])
    if ((k < 2) or (k > 13)):
        sys.exit('need to be between 2 and 13')
    riffle.shuffle(k)
