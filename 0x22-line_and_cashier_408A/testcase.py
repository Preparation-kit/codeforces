#!/usr/bin/python3

import sys
import os
import random

sys.stdout = open("testcase.txt", "w")


class RandomGenerator():
    def __init__(self):
        pass

    def integer(self, lower_bound, upper_bound):
        ret = random.randint(lower_bound, upper_bound)
        return ret

    def array(self, array_size, lower_bound, upper_bound):
        l = [0] * array_size
        for index, element in enumerate(l):
                l[index] = self.integer(lower_bound, upper_bound)                
        return l


    def array_str(self, array_size):
        l = [0] * array_size
        for index, element in enumerate(l):
            space_true = self.integer(0, 10)
            if space_true == 4:
                l[index] = chr(32)
            else:
                l[index] = chr(self.integer(97, 122))        
        return l  


class ListOperation():
    def __init__(self):
        pass

    def print_space(self, l):
        for element in l:
            print(element, end=" ")
        print()

    def print_csv(self, l):
        for element in l:
            print(element, end=", ")
        print()


class Print():
    def __init__(self):
        pass

    def inline_print(self, n):
        """
        print n elements in a line and then print an endline
        """
        for i in range(n):
            print()


if __name__ == "__main__":
    rand = RandomGenerator()
    lops = ListOperation()

    t = 20
    print(t)
    for number in range(t):
        # num_lim = 100
        print(f"-----------------------------------{number + 1}")
        
        n = rand.integer(1, 10)
        print(n)

        temp = rand.array(n, 1, 10)
        for k in temp:        
            print(k, end=" ")
        print()

        for k in temp:
            for m in rand.array(k, 1, 10):
                print(m, end=" ")
            print()        
