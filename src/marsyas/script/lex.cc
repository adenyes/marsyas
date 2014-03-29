// Generated by Flexc++ V1.05.00 on Sat, 29 Mar 2014 00:55:05 -0700

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

// $insert class_ih
#include "scanner_impl.h"

// $insert namespace-open
namespace Marsyas
{

    // s_ranges__: use (unsigned) characters as index to obtain
    //           that character's range-number.
    //           The range for EOF is defined in a constant in the
    //           class header file
size_t const ScannerBase::s_ranges__[] =
{
     0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 5, 6, 7, 8, 9, 9, 9, 9,10,11,12,13,14,15,16,17,18,18,
    18,18,18,18,18,18,18,18,19,20,21,22,23,24,24,25,25,25,25,25,25,25,25,25,25,
    25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,26,27,28,29,30,31,32,33,34,
    35,36,37,38,39,40,41,41,42,43,44,45,46,47,48,49,50,51,52,53,54,54,54,55,56,
    57,58,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,
    59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,
    59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,
    59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,
    59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,59,
    59,59,59,59,59,60,
};

    // s_dfa__ contains the rows of *all* DFAs ordered by start state.
    // The enum class StartCondition__ is defined in the baseclass header
    // INITIAL is always 0.
    // Each entry defines the row to transit to if the column's
    // character range was sensed. Row numbers are relative to the
    // used DFA and d_dfaBase__ is set to the first row of the subset to use.
    // The row's final two values are begin and end indices in
    // s_rfc__[] (rule, flags and count), defining the state's rule details
int const ScannerBase::s_dfa__[][64] =
{
    // INITIAL
    {-1,-1,-1,-1,-1,-1, 1, 2, 3,-1, 4, 5, 6, 7, 8, 9,-1,10,11,12,
         13,14,15,16,-1,17,18,-1,19,-1,17,-1,17,17,17,17,20,21,17,17,
         17,17,17,17,17,22,17,17,17,17,23,17,17,24,17,25,-1,26,27,-1,
         -1,-1,   0, 0},  // 0
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,28,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   0, 0},  // 1
    {-1, 2, 2, 2, 2, 2, 2,29, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
          2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
          2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
         -1,-1,   0, 0},  // 2
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   0, 1},  // 3
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,30,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   1, 2},  // 4
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   2, 3},  // 5
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   3, 4},  // 6
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,31,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   4, 5},  // 7
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   5, 6},  // 8
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,31,-1,
         -1,-1,-1,32,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   6, 7},  // 9
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,33,-1,
         -1,-1,-1,-1,-1,33,-1,-1,-1,-1,33,-1,33,33,33,33,33,33,33,33,
         33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,-1,-1,-1,-1,-1,
         -1,-1,   7, 8},  // 10
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,34,35,11,-1,
         -1,-1,-1,-1,-1,33,-1,-1,-1,-1,33,-1,33,33,33,33,33,33,33,33,
         33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,-1,-1,-1,-1,-1,
         -1,-1,   8, 9},  // 11
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,   9,10},  // 12
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  10,11},  // 13
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  11,12},  // 14
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,36,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  12,13},  // 15
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  13,14},  // 16
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  14,15},  // 17
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  15,16},  // 18
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  16,17},  // 19
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,38,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  17,18},  // 20
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,39,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  18,19},  // 21
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,40,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  19,20},  // 22
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,41,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  20,21},  // 23
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,42,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  21,22},  // 24
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  22,23},  // 25
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  23,24},  // 26
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  24,25},  // 27
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  25,26},  // 28
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  26,27},  // 29
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,43,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  27,27},  // 30
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,34,-1,31,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  27,28},  // 31
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  28,29},  // 32
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,33,-1,
         -1,-1,-1,-1,-1,33,-1,-1,-1,-1,33,-1,33,33,33,33,33,33,33,33,
         33,33,33,33,33,33,33,33,33,33,33,33,33,33,33,-1,-1,-1,-1,-1,
         -1,-1,  29,30},  // 33
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,34,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  30,31},  // 34
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,44,-1,
         -1,-1,-1,-1,-1,44,-1,-1,-1,-1,44,-1,44,44,44,44,44,44,44,44,
         44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,-1,-1,-1,-1,-1,
         -1,-1,  31,31},  // 35
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  31,32},  // 36
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,37,-1,-1,-1,-1,37,-1,37,37,37,37,37,37,37,37,
         37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,-1,-1,-1,-1,-1,
         -1,-1,  32,33},  // 37
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,45,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  33,34},  // 38
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,46,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  34,35},  // 39
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  35,36},  // 40
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,47,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  36,37},  // 41
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,48,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  37,38},  // 42
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,49,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  38,38},  // 43
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,44,-1,
         -1,-1,-1,-1,-1,44,-1,-1,-1,-1,44,-1,44,44,44,44,44,44,44,44,
         44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,-1,-1,-1,-1,-1,
         -1,-1,  38,39},  // 44
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,50,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  39,40},  // 45
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,51,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  40,41},  // 46
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,52,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  41,42},  // 47
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,53,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  42,43},  // 48
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,54,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  43,43},  // 49
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  43,44},  // 50
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,52,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  44,45},  // 51
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  45,46},  // 52
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,35,37,-1,
         -1,-1,-1,-1,-1,17,-1,-1,-1,-1,17,-1,17,17,17,17,17,17,17,17,
         17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,-1,-1,-1,-1,-1,
         -1,-1,  46,47},  // 53
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         55,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  47,47},  // 54
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,56,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  47,47},  // 55
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,57,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  47,47},  // 56
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  47,48},  // 57
    // directive
    {-1,-1, 1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 4, 3, 3, 3, 3, 3, 3, 3,
          5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  48,48},  // 0
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
         -1,-1,  48,49},  // 1
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
          2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
          2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
         -1,-1,  49,50},  // 2
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  50,51},  // 3
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  51,52},  // 4
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
          3, 3, 3, 3, 8, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  52,53},  // 5
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 6, 2, 2, 2, 2, 6, 2, 6, 6, 6, 6, 6, 6, 6, 6,
          6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 2, 2, 2, 2,
         -1,-1,  53,54},  // 6
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  54,55},  // 7
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 9, 3, 3, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  55,56},  // 8
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
          3, 3,10, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  56,57},  // 9
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,11, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  57,58},  // 10
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3,12, 3, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  58,59},  // 11
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3,13, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  59,60},  // 12
    {-1,-1,-1,-1, 2,-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2,
          2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3,
          3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2,
         -1,-1,  60,61},  // 13
};

    // The first value is the rule index
    // The second value is the FLAG: see the scannerbase.h file
    // 1: Final     4: Count        11: Final/BOL,Inc     
    // 2: Inc.      5: Final,Count  13: Final/BOL,Count
    // 3: Final,Inc 9: Final/BOL    
    // The third value is the LOP count value (valid for Count flags)
size_t const ScannerBase::s_rfc__[][3] =
{
//     R  F  C
     { 0, 1, 0},  // 0
     {11, 1, 0},  // 1
     {12, 1, 0},  // 2
     {20, 1, 0},  // 3
     {18, 1, 0},  // 4
     {14, 1, 0},  // 5
     {19, 1, 0},  // 6
     {21, 1, 0},  // 7
     {32, 1, 0},  // 8
     {16, 1, 0},  // 9
     {15, 1, 0},  // 10
     {24, 1, 0},  // 11
     {13, 1, 0},  // 12
     {25, 1, 0},  // 13
     {34, 1, 0},  // 14
     { 9, 1, 0},  // 15
     {10, 1, 0},  // 16
     {34, 1, 0},  // 17
     {34, 1, 0},  // 18
     {34, 1, 0},  // 19
     {34, 1, 0},  // 20
     {34, 1, 0},  // 21
     { 7, 1, 0},  // 22
     { 8, 1, 0},  // 23
     {17, 1, 0},  // 24
     {23, 1, 0},  // 25
     {33, 1, 0},  // 26
     {32, 1, 0},  // 27
     {26, 1, 0},  // 28
     {35, 1, 0},  // 29
     {31, 1, 0},  // 30
     {22, 1, 0},  // 31
     {34, 1, 0},  // 32
     {34, 1, 0},  // 33
     {34, 1, 0},  // 34
     {28, 1, 0},  // 35
     {34, 1, 0},  // 36
     {34, 1, 0},  // 37
     {35, 1, 0},  // 38
     {34, 1, 0},  // 39
     {34, 1, 0},  // 40
     {34, 1, 0},  // 41
     {34, 1, 0},  // 42
     {29, 1, 0},  // 43
     {34, 1, 0},  // 44
     {30, 1, 0},  // 45
     {27, 1, 0},  // 46
     { 6, 1, 0},  // 47
     { 1, 1, 0},  // 48
     { 5, 1, 0},  // 49
     { 4, 1, 0},  // 50
     { 4, 1, 0},  // 51
     { 4, 1, 0},  // 52
     { 4, 1, 0},  // 53
     { 3, 1, 0},  // 54
     { 4, 1, 0},  // 55
     { 4, 1, 0},  // 56
     { 4, 1, 0},  // 57
     { 4, 1, 0},  // 58
     { 4, 1, 0},  // 59
     { 2, 1, 0},  // 60
};

int const (*ScannerBase::s_dfaBase__[])[64] =
{
    s_dfa__ + 0,
    s_dfa__ + 58,
};

size_t ScannerBase::s_istreamNr = 0;

// $insert inputImplementation
ScannerBase::Input::Input()
:
    d_in(0),
    d_lineNr(1)
{}

ScannerBase::Input::Input(std::istream *iStream, size_t lineNr)
:
    d_in(iStream),
    d_lineNr(lineNr)
{}

size_t ScannerBase::Input::get()
{
    switch (size_t ch = next())         // get the next input char
    {
        case '\n':
            ++d_lineNr;
        // FALLING THROUGH

        default:
        return ch;
    }
}

size_t ScannerBase::Input::next()
{
    size_t ch;

    if (d_deque.empty())                    // deque empty: next char fm d_in
    {
        if (d_in == 0)
            return AT_EOF;
        ch = d_in->get();
        return *d_in ? ch : static_cast<size_t>(AT_EOF);
    }

    ch = d_deque.front();
    d_deque.pop_front();

    return ch;
}

void ScannerBase::Input::reRead(size_t ch)
{
    if (ch < 0x100)
    {
        if (ch == '\n')
            --d_lineNr;
        d_deque.push_front(ch);
    }
}

void ScannerBase::Input::reRead(std::string const &str, size_t fm)
{
    for (size_t idx = str.size(); idx-- > fm; )
        reRead(str[idx]);
}

ScannerBase::ScannerBase(std::istream &in, std::ostream &out)
:
    d_filename("-"),
    d_startCondition(StartCondition__::INITIAL),
    d_state(0),
    d_out(new std::ostream(out.rdbuf())),
    d_sawEOF(false),
    d_atBOL(true),
    d_tailCount(36, std::numeric_limits<size_t>::max()),
// $insert interactiveInit
    d_in(0),
    d_input(new std::istream(in.rdbuf())),
    d_dfaBase__(s_dfa__)
{}

void ScannerBase::switchStream__(std::istream &in, size_t lineNr)
{
    d_input.close();
    d_state = 0;
    d_input = Input(new std::istream(in.rdbuf()), lineNr);
    d_sawEOF = false;
    d_atBOL = true;
}


ScannerBase::ScannerBase(std::string const &infilename, std::string const &outfilename)
:
    d_filename(infilename),
    d_startCondition(StartCondition__::INITIAL),
    d_state(0),
    d_out(outfilename == "-"    ? new std::ostream(std::cout.rdbuf()) :
          outfilename == ""     ? new std::ostream(std::cerr.rdbuf()) :
                                  new std::ofstream(outfilename)),
    d_sawEOF(false),
    d_atBOL(true),
    d_tailCount(36, std::numeric_limits<size_t>::max()),
    d_input(new std::ifstream(infilename)),
    d_dfaBase__(s_dfa__)
{}

void ScannerBase::switchStreams(std::istream &in, std::ostream &out)
{
    switchStream__(in, 1);
    switchOstream(out);
}


void ScannerBase::switchOstream(std::ostream &out)
{
    *d_out << std::flush;
    d_out.reset(new std::ostream(out.rdbuf()));
}

// $insert debugFunctions
void ScannerBase::setDebug(bool onOff)
{}

bool ScannerBase::debug() const
{
    return false;
}

void ScannerBase::redo(size_t nChars)
{
    size_t from = nChars >= length() ? 0 : length() - nChars;
    d_input.reRead(d_matched, from);
    d_matched.resize(from);
}

void ScannerBase::switchOstream(std::string const &outfilename)
{
    *d_out << std::flush;
    d_out.reset(
            outfilename == "-"    ? new std::ostream(std::cout.rdbuf()) :
            outfilename == ""     ? new std::ostream(std::cerr.rdbuf()) :
                                    new std::ofstream(outfilename));
}


void ScannerBase::switchIstream(std::string const &infilename)
{
    d_input.close();
    d_filename = infilename;
    d_input = Input(new std::ifstream(infilename));
    d_sawEOF = false;
    d_atBOL = true;
}

void ScannerBase::switchStreams(std::string const &infilename,
                           std::string const &outfilename)
{
    switchOstream(outfilename);
    switchIstream(infilename);
}

void ScannerBase::pushStream(std::istream  &istr)
{
    std::istream *streamPtr = new std::istream(istr.rdbuf());
    p_pushStream("(istream)", streamPtr);
}

void ScannerBase::pushStream(std::string const &name)
{
    std::istream *streamPtr = new std::ifstream(name);
    if (!*streamPtr)
    {
        delete streamPtr;
        throw std::runtime_error("Cannot read " + name);
    }
    p_pushStream(name, streamPtr);
}


void ScannerBase::p_pushStream(std::string const &name, std::istream *streamPtr)
{
    if (d_streamStack.size() == s_maxSizeofStreamStack__)
    {
        delete streamPtr;
        throw std::length_error("Max stream stack size exceeded");
    }

    d_streamStack.push_back(StreamStruct{d_filename, d_input});
    d_filename = name;
    d_input = Input(streamPtr);
    d_sawEOF = false;
    d_atBOL = true;
}


bool ScannerBase::popStream()
{
    d_input.close();

    if (d_streamStack.empty())
        return false;

    StreamStruct &top = d_streamStack.back();

    d_input =   top.pushedInput;
    d_filename = top.pushedName;
    d_streamStack.pop_back();
    d_sawEOF = false;

    return true;
}

ScannerBase::ActionType__ ScannerBase::actionType__(size_t range)
{
    d_nextState = d_dfaBase__[d_state][range];

    if (d_nextState != -1)                  // transition is possible
        return ActionType__::CONTINUE;

    if (atFinalState())                     // FINAL state reached
        return ActionType__::MATCH;

    if (d_matched.size())
        return ActionType__::ECHO_FIRST;    // no match, echo the 1st char

    return range != s_rangeOfEOF__ ? 
                ActionType__::ECHO_CH 
            : 
                ActionType__::RETURN;
}

void ScannerBase::accept(size_t nChars)          // old name: less
{
    if (nChars < d_matched.size())
    {
        d_input.reRead(d_matched, nChars);
        d_matched.resize(nChars);
    }
}

  // The size of d_matched is determined:
  //    The current state is a known final state (as determined by 
  // inspectRFCs__(), just prior to calling matched__). 
  //    The contents of d_matched are reduced to d_final's size or (if set)
  // to the LOP-rule's tail size.
void ScannerBase::determineMatchedSize(FinData const &final)
{
    size_t length = final.matchLen;
    if (final.tailCount != std::numeric_limits<size_t>::max())
        length -= final.tailCount;

    d_input.reRead(d_matched, length);      // reread the tail section
    d_matched.resize(length);               // return what's left
}

  // At this point a rule has been matched.  The next character is not part of
  // the matched rule and is sent back to the input.  The final match length
  // is determined, the index of the matched rule is determined, and then
  // d_atBOL is updated. Finally the rule index is returned.
size_t ScannerBase::matched__(size_t ch)
{
    d_input.reRead(ch);

    if (!d_atBOL)
        d_final.atBOL.rule = std::numeric_limits<size_t>::max();

    FinData &final = d_final.atBOL.rule == std::numeric_limits<size_t>::max() ? 
                            d_final.notAtBOL
                        :
                            d_final.atBOL;

    determineMatchedSize(final);

    d_atBOL = *d_matched.rbegin() == '\n';


    return final.rule;
}

size_t ScannerBase::getRange__(int ch)       // using int to prevent casts
{
    if (ch != AT_EOF)
        d_sawEOF = false;

    return ch == AT_EOF ? static_cast<size_t>(s_rangeOfEOF__) : s_ranges__[ch];
}

  // At this point d_nextState contains the next state and continuation is
  // possible. The just read char. is appended to d_match, and LOP counts
  // are updated.
void ScannerBase::continue__(int ch)
{
    d_state = d_nextState;

    if (ch != AT_EOF)
        d_matched += ch;
}

void ScannerBase::echoCh__(size_t ch)
{
    *d_out << static_cast<char>(ch);
    d_atBOL = ch == '\n';
}


   // At this point there is no continuation. The last character is
   // pushed back into the input stream as well as all but the first char. in
   // the buffer. The first char. in the buffer is echoed to stderr. 
   // If there isn't any 1st char yet then the current char doesn't fit any
   // rules and that char is then echoed
void ScannerBase::echoFirst__(size_t ch)
{
    d_input.reRead(ch);
    d_input.reRead(d_matched, 1);
    echoCh__(d_matched[0]);
}

    // Inspect all s_rfc__ elements associated with the current state
    //  If the s_rfc__ element has its COUNT flag set then set the 
    // d_tailCount[rule] value to the element's tailCount value, if it has its 
    // INCREMENT flag set then increment d_tailCount[rule]
    //  If neither was set set the d_tailCount[rule] to numeric_limits<size_t>::max()
    // 
    // If the s_rfc__ element has its FINAL flag set then store the rule number
    // in d_final.second. If it has its FINAL + BOL flags set then store the
    // rule number in d_final.first
void ScannerBase::inspectRFCs__()
{
    for 
    (
        size_t begin = d_dfaBase__[d_state][s_finacIdx__], 
                 end = d_dfaBase__[d_state][s_finacIdx__ + 1];
            begin != end;
                ++begin
    )
    {
        size_t const *rfc = s_rfc__[begin];
        size_t flag = rfc[FLAGS];
        size_t rule = rfc[RULE];

        if (flag & INCREMENT)
            ++d_tailCount[rule];
        else 
            d_tailCount[rule] = (flag & COUNT) ? rfc[ACCCOUNT] : std::numeric_limits<size_t>::max();

        if (flag & FINAL)
        {
            FinData &final = (flag & BOL) ? d_final.atBOL : d_final.notAtBOL;
            final = FinData { rule, d_matched.size(), d_tailCount[rule] };
        }
    }
}

void ScannerBase::reset__()
{
    d_final = Final { {std::numeric_limits<size_t>::max(), std::numeric_limits<size_t>::max(), std::numeric_limits<size_t>::max() }, 
                      {std::numeric_limits<size_t>::max(), std::numeric_limits<size_t>::max(), std::numeric_limits<size_t>::max() } };
    d_state = 0;
    d_return = true;

    if (!d_more)
        d_matched.clear();

    d_more = false;
}

int Scanner::executeAction__(size_t ruleIdx)
try
{
    switch (ruleIdx)
    {
        // $insert actions
        case 0:
        {
#line 9 "scanner.l"
            { begin(StartCondition__::directive); return '#'; }

        }
        break;
        case 1:
        {
#line 13 "scanner.l"
            {begin(StartCondition__::INITIAL); return '\n'; }

        }
        break;
        case 2:
        {
#line 15 "scanner.l"
            { return Parser::INCLUDE; }

        }
        break;
        case 3:
        {
#line 17 "scanner.l"
            { return Parser::AS; }

        }
        break;
        case 4:
        {
#line 19 "scanner.l"
            { return Parser::ID; }

        }
        break;
        case 5:
        {
#line 21 "scanner.l"
            { return Parser::DIRECTIVE_ARG; }

        }
        break;
        case 6:
        {
#line 25 "scanner.l"
            { return Parser::PUBLIC; }

        }
        break;
        case 7:
        {
#line 27 "scanner.l"
            { return '{'; }

        }
        break;
        case 8:
        {
#line 28 "scanner.l"
            { return '}'; }

        }
        break;
        case 9:
        {
#line 29 "scanner.l"
            { return '['; }

        }
        break;
        case 10:
        {
#line 30 "scanner.l"
            { return ']'; }

        }
        break;
        case 11:
        {
#line 31 "scanner.l"
            { return '('; }

        }
        break;
        case 12:
        {
#line 32 "scanner.l"
            { return ')'; }

        }
        break;
        case 13:
        {
#line 33 "scanner.l"
            { return '='; }

        }
        break;
        case 14:
        {
#line 34 "scanner.l"
            { return ','; }

        }
        break;
        case 15:
        {
#line 35 "scanner.l"
            { return ';'; }

        }
        break;
        case 16:
        {
#line 36 "scanner.l"
            { return ':'; }

        }
        break;
        case 17:
        {
#line 37 "scanner.l"
            { return '~'; }

        }
        break;
        case 18:
        {
#line 38 "scanner.l"
            { return '+'; }

        }
        break;
        case 19:
        {
#line 39 "scanner.l"
            { return '-'; }

        }
        break;
        case 20:
        {
#line 40 "scanner.l"
            { return '*'; }

        }
        break;
        case 21:
        {
#line 41 "scanner.l"
            { return '/'; }

        }
        break;
        case 22:
        {
#line 43 "scanner.l"
            { return Parser::EQ; }

        }
        break;
        case 23:
        {
#line 44 "scanner.l"
            { return Parser::NEQ; }

        }
        break;
        case 24:
        {
#line 45 "scanner.l"
            { return Parser::LESS; }

        }
        break;
        case 25:
        {
#line 46 "scanner.l"
            { return Parser::MORE; }

        }
        break;
        case 26:
        {
#line 48 "scanner.l"
            { return Parser::ARROW; }

        }
        break;
        case 27:
        {
#line 50 "scanner.l"
            { return Parser::WHEN; }

        }
        break;
        case 28:
        {
#line 51 "scanner.l"
            { return Parser::ON; }

        }
        break;
        case 29:
        {
#line 52 "scanner.l"
            { return Parser::ELSE; }

        }
        break;
        case 30:
        {
#line 54 "scanner.l"
            { return Parser::BOOL; }

        }
        break;
        case 31:
        {
#line 56 "scanner.l"
            { return Parser::REAL; }

        }
        break;
        case 32:
        {
#line 58 "scanner.l"
            { return Parser::INT; }

        }
        break;
        case 33:
        {
#line 60 "scanner.l"
            { return Parser::STRING; }

        }
        break;
        case 34:
        {
#line 62 "scanner.l"
            { return Parser::ID; }

        }
        break;
        case 35:
        {
#line 64 "scanner.l"
            { return Parser::PATH; }

        }
        break;
    }
    noReturn__();
    return 0;
}
catch (Leave__ value)
{
    return static_cast<int>(value);
}

int Scanner::lex__()
{
    reset__();
    preCode();

    while (true)
    {
        size_t ch = get__();                // fetch next char
        size_t range = getRange__(ch);      // determine the range

        inspectRFCs__();                    // update d_tailCount values

        switch (actionType__(range))        // determine the action
        {
            case ActionType__::CONTINUE:
                continue__(ch);
            continue;

            case ActionType__::MATCH:
            {
                d_token__ = executeAction__(matched__(ch));
                if (return__())
                {
                    print();
                    return d_token__;
                }
                break;
            }

            case ActionType__::ECHO_FIRST:
                echoFirst__(ch);
            break;

            case ActionType__::ECHO_CH:
                echoCh__(ch);
            break;

            case ActionType__::RETURN:
                if (!popStream())
                    return 0;
            continue;
        } // switch

        reset__();
        preCode();
    } // while
}

void ScannerBase::print__() const
{
}


// $insert namespace-close
}
