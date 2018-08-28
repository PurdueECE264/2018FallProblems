import sys
import testgen
import argparse

def checkArgs(args = None):
    parser = argparse.ArgumentParser(description='parse arguments')
    parser.add_argument('-n', '--num', type = int,
        help = 'number of points per cluster', default = 10)
    parser.add_argument('-p', '--overlap', type = bool,
        help = 'can clusters overlap? True/False', default = False)
    parser.add_argument('-d', '--dimension', type = int, default = 2)
    parser.add_argument('-c', '--cluster', type = int,
        help = 'number of clusters', default = 3)
    parser.add_argument('-m', '--minc', type = int,
                        help = 'minimum size of a cluster', default = 10)
    parser.add_argument('-M', '--maxc', type = int,
                        help = 'maximum size of a cluster', default = 15)
    parser.add_argument('-o', '--output',help = 'output file name', default = 'data.txt')
    parser.add_argument('-g', '--group',
                            help = 'cluster file name', default = 'cluster.txt')
    args = parser.parse_args(args)
    return args

if __name__ == "__main__":
    args = checkArgs(sys.argv[1:])
    testgen.testgen(args)
