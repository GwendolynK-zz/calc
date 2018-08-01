// Created by: Westley K
// Date: Aug 1, 2018
// version-1.0.0
// https://github.com/WestleyK/calc
//
//
// MIT License
//
// Copyright (c) 2018 WestleyK
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//


#include <stdio.h>
#include <stdlib.h>

#define VERSION_SCRIPT "version-1.0.0"
#define DATE_SCRIPT "date: Aug 1, 2018"


void usage() {
  printf("Usage: calc [NUMBER] [+ | - | / | x] [NUMBER]\n");
  printf("	-h | -help | --help (print help menu)\n");
  printf("	[NUMBER] [+ | - | / | x] [NUMBER]\n");
  printf("	-v | -version | --version (print version)\n");
  printf("Source code: https://github.com/WestleyK/calc\n");
  exit(0);
}

void version() {
  printf("%s\n", VERSION_SCRIPT);
  printf("%s\n", DATE_SCRIPT);
  exit(0);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    usage();
  }
  if (argc > 4 || argc < 4) {
    printf("Not valid argument! :P\n");
    exit(1);
  }

  float FIRST;
  float SECOND;
  char OPERATOR;
  float ANSWER;

  FIRST = atof(argv[1]);
  OPERATOR = *argv[2];
  SECOND = atof(argv[3]);

  switch (*argv[2]) {
    case '/': ANSWER = FIRST / SECOND;
      break;
    case 'x': ANSWER = FIRST * SECOND;
      break;
    case '+': ANSWER = FIRST + SECOND;
      break;
    case '-': ANSWER = FIRST - SECOND;
      break;
    default: exit(1);
    }
  printf("%f\n", ANSWER);
  return 0;
}



//
// End source code
//





