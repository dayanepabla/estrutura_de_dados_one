#!/usr/bin/env python

import os, sys

try:
    import sh
except ImportError:
    sys.exit("Can't import sh! Try install it with: \n  pip install sh")


CURRENT_DIR = os.path.dirname(os.path.realpath(__file__))
MAX_SUM_PATH = os.path.join(CURRENT_DIR, 'maxSubSum')

if not os.path.exists(MAX_SUM_PATH):
    sys.exit("No such executable file: %s" % MAX_SUM_PATH)


def execute(program, param):
    outputs = []

    print 'Executing %s algorithm...' % param
    for i in xrange(1, 26):
        print '>> Round %i' % i
        outputs.append(program(param))

    return outputs


def main():
    max_sum = sh.Command(MAX_SUM_PATH)
    linear_outputs = execute(max_sum, 'linear')
    quadratic_outputs = execute(max_sum, 'quadratic')


if __name__ == '__main__':
    main()
