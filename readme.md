# Hacking INF Examples

Documentation for uploading Hacking INF examples.

## Location

All Examples are located in the git repository

	https://git-inf.technikum-wien.at/INF/Hacking-INF-Examples

Access is possible via

	git@git-inf.technikum-wien.at:INF/Hacking-INF-Examples.git

Use these commands to clone the repo:

	git clone git@git-inf.technikum-wien.at:INF/Hacking-INF-Examples.git

## Courses

All Examples are grouped in courses. A course may be

* a real programming course like BIF/GPR or BMR/PAD
* a general course for learning the C, Java, C#, etc language
* a exam

A Course is simply a folder in the repository and contains a `info.yaml` and examples.

### info.yaml

The `info.yaml` contains some meta information an default compiler and test settings.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
name:        C
title:       Basic C
headline:    Basiskurs C
description: Ein Basiskurs in C
categories:
  - name:         helloworld
    title:        Hello World
    description:  Basic programs
    examples:
      - HelloWorld
      - EndlessLoop
  - name:         formatted output
    title:        Formatted Output
    description:  Basic formating examples
    examples:
      - Age_of_Empires
type:        open
openfrom:               2016-05-01 08:00
openuntil:              2016-12-31 23:59
closedfrom:             2017-01-15 08:00
closeduntil:            2017-01-15 14:20
filename:    main.c
exe:         main.exe
compiler:
  - cmd:     gcc
    args:    -Wall -g -pedantic -Wextra -std=c99 -ggdb -static-libgcc -c main.c
    log:     |
      Compiler
      ---------------------------
  - cmd:     gcc
    args:    -o main.exe main.o
    log:     |
      Linker
      ---------------------------
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

**Details:**

Property		| Description
----------------|------------------------------------------------
name			| the internal name of the course. It must match the directory name of the course
title			| the title of the course. 
headline		| a short description
description		| a long description
categories      | describes categories in detail
type			| type of the course. `open`, `closed`, `timed` See details bellow
openfrom		| the example is available form the given date and time
openuntil		| the example is available until the given date and time
closedfrom		| the example is **not** available form the given date and time. This is usefull to close the regular course during a exam
closeduntil		| the example is **not** available until the given date and time. This is usefull to close the regular course during a exam
filename		| the filename of the submitted sourcecode file. `main.c`, `main.cs`, `main.java`
exe				| the name of the compiled executable
compiler		| list of compiler settings, see details below

**Compiler:**

Property		| Description
----------------|------------------------------------------------
cmd				| the compile command. `gcc`, `mcs`, `javac`
args			| arguments for the compiler
log				| the initial logfile entries

**Category:**

Property		| Description
----------------|------------------------------------------------
name 			| the name of the category
title			| the title of the category
description		| a long description
examples		| a optional order of examples (referenced by their name) within a category


**type**

Type			| Description
----------------|------------------------------------------------
open			| the course is open and students may solve examples
closed			| the course is closed. Only teacher will see the examples
timed			| each example has a open from/until date and will not be shown outside of the time range.

## Examples

A example is located in a course and has a predefined directory & file structure. It's meta information are located in a `info.yaml` file.

### Structure

The structure of a example looks like a default structure of *Thomas Mandls* example builder `make` file. For a C-Program called "HelloWorld" it looks like:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/
    use_this_main.c
    our_main.c
tests/
    HelloWorld_test001.in
    HelloWorld_test001.sexp
    HelloWorld_test002.in
    HelloWorld_test002.sexp
    HelloWorld_test003.in
    HelloWorld_test003.sexp
    ...
text/
    HelloWorld_Angabe_full.md
info.yaml
properties.txt
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Dir or File			| Description
--------------------|------------------------------------------------
src/				| Location of source files. In this directory, the example can be developed and tested. Any file, except noted below, will be ignored.
use_this_main.*		| (optional) You can provide a template for the example as a starting point.
our_main.*			| (optional) You can provide a main function. That will be attached at the end of the submitted code.
tests/				| Location of all checkproject test files.
*.in				| Stdin files for checkproject.
*.sexp				| Expected stdou files for checkproject.
text/				| Location of example instructions.
*_Angabe_full.md	| Only a file that ends with `_Angabe_full.md` (note: **CaseSensitive**) will be used as the exam instruction

### info.yaml

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
---
problemtitle:           C-HelloWorld
problemshorttitle:      C HelloWorld
description:            Write a Hello World program
category:               HelloWorld
difficulty:             easy (1/5)
requires:
    - checkproject
    - output
    
author: traditional
created: 2016

# course overrides
type:        closed
openfrom:    2016-05-01 08:00
openuntil:   2016-12-31 23:59
closedfrom:  2017-01-15 08:00
closeduntil: 2017-01-15 14:20
filename:    main.c
exe:         main.exe
compiler:
- cmd:     gcc
  args:    -Wall -g -pedantic -Wextra -std=c99 -ggdb -static-libgcc -c main.c
  log:    |
    Compiler
    ---------------------------
- cmd:     gcc
  args:    -o main.exe main.o
  log:    |
    Linker
    ---------------------------

...
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Type				| Description
--------------------|------------------------------------------------
problemtitle		| the name of the example. It must match the directory name
problemshorttitle	| the title of the example
description			| the description of the example
openfrom			| the example is available form the given date and time
openuntil			| the example is available until the given date and time
closedfrom			| the example is **not** available form the given date and time. This is usefull to close the regular course during a exam
closeduntil			| the example is **not** available until the given date and time. This is usefull to close the regular course during a exam
category			| a category
difficulty			| difficulty level as text
requires			| skill requirements
author				| the author
created				| the creation year of the example

All other settings are ignored. The `course overrides` section is optional. Each example may override the course default settings. This is usefull in mixed coursed (e.g. Java & C#)

