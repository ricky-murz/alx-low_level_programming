#!/bin/bash
echo '#include <stdio.h>' | cat - $0 | gcc -xc - && ./a.out
