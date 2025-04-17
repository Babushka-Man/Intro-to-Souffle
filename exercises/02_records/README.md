
# Exercise 2: Records

In order for us to represent complex data structures, Souffle lets us define record types. A record is a collection of fields, each of which can be of a different type. Records are analogous to structs in C.

We define a record type using the `.type` directive, followed by name of the new type and its fields. For example:

```
.type Person = [name: symbol, age: number]
```

> **Note**: Field names are not used that often to identify the fields, when writing rules that use records we will access them only by their position (see example in `geometry.dl`).

In this exercise, we will implement a program that processes geometric data in 2D space. We will define record types to represent points and Lines. We will also implement several relations that process these records. You may write your solution for this exercise in the file `geometry.dl`.

> **Note**: All numeric coordinates in this part should be represented as `float` values.

### Part 1 - Points

In the file geometry.dl, you may find a definition for a record type called `Point`. This record has two fields, `x` and `y`, which represent the coordinates of the point in 2D space.

> **Task** - Implement the relation `distance` that calculates the distance between every two **distinct** points in the points relation. Try to include each pair only once in the output relation.

> **Hint** - You may find an implementation of the relation `first_quadrant` in the file. This relation contain values of type `Point` and its rule handles their fields. You can use this rule as a reference for your implementation.

> **Hint** - You may use the built-in power functor (`^`) in order to calculate the square root of numbers.

### Part 2 - Lines
Record fields may be of (almost) any type, not just primitives, including other records.

In this part we will define a record type called `Line`. In our program lines will be defined by two distinct points along the line.

> **Task** - Define the `Line` record type using the `Point` record type.

> **Task** - Implement the following relations:
> - `midpoint`: Contains the midpoint of each line in the `lines` relation.
> - `parallel_to_axis`: Contains all lines that are parallel to the x-axis or y-axis.
> - `slope`: Contains the slope of each **non-vertical** line in the `lines` relation.

### Execution

To run your program, you can use the following command:

```bash
souffle -D- -Finput geometry.dl
```
This will execute the program using input files from a directory called `input` (where you can find some example input) and print the output to the standard output. You may also remove the `-D-` flag to write each output relation into a corresponding file instead.

> **Note** - The `-F` flag specifies the input directory. If omitted, souffle will look for `.fact` files in the current directory.

In the `results` directory, you may find the expected output for the relations implemented in this exercise. You may use these files to verify your solution.

> **Note**: The order of tuples in each relation does not matter and may vary.

### Related Materials
- [Souffle Documentation - Records](https://souffle-lang.github.io/types#record-types)