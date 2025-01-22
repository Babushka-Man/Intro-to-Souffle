# Intro

### Installation

First of all, in order to use Souffle, you will need to install it. You may find installation instructions [here](https://souffle-lang.github.io/install), or you can [build it from source](https://souffle-lang.github.io/build).

To check if Souffle is installed correctly, you can run the following command:

```bash
souffle --version
```

If you see the version of Souffle, then you are good to go!

### Running Souffle

In this folder you may find two Souffle programs: `intro1.dl` and `intro2.dl`. Try to run Souffle in interpreter mode with the following command:

```bash
souffle -D- intro1.dl
```

> **Note**: The `-D` flag is used to determine where to print the output of the program. `-D-` prints the output of the program to the standard output.

After running the command, you should see the a "Hello World!" message printed to the standard output, among some other things.
Try to take a look at the `intro1.dl` file, there you may find some documentation about the program and it's different parts.


Now let's take a look at the `intro2.dl` program, there you will find another program (with some documentation as well). This program takes the file `parent.facts`, which contains a relation that describe the parent-child relationship of some people, as input.
It's output is a relation that describes the ancestor-descendant relationship of the people described in the input file.
> **Note**: By default Souffle assumes that values in input files are separated by tabs, i.e. in TSV format. You may find additional info about io directives [here](https://souffle-lang.github.io/directives).

After taking a look at the program's code, try to run it with the following command:

```bash
souffle -D- intro2.dl
```

