# push swap

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/juwkim/push_swap?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/juwkim/push_swap?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/juwkim/push_swap?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/juwkim/push_swap?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/juwkim/push_swap?color=green" />
</p>

## Usage

- Pull files ↙️
```
$ git clone --recursive https://github.com/juwkim/push_swap.git
```

- To make push_swap ↙️
```
$ make
```

- To make push_swap & checker ↙️
```
$ make bonus
```

- To use tester ↙️

```
$ make test
```

- To check this repository complies with [norminette](https://github.com/42School/norminette) ↙️

```
$ make norm
```

## Execution example
```
$ ARG="4 3 1 2 5 6"; ./push_swap $ARG | wc -l
>> 8
$ ARG="4 3 1 2 5 6"; ./push_swap $ARG | ./checker $ARG
>> OK

```

## Game rules

* The game is composed of 2 stacks named a and b. <br>
* To start with: <br>
◦ a contains a random number of either positive or negative numbers without any duplicates. <br>
◦ b is empty. <br>
* The goal is to sort in ascending order numbers into stack a. <br>
* To do this you have the following operations at your disposal. <br>

|Command|Description													|
|:---:	|:---														| 
|**sa**	|**swap** the first two elements at the top of stack a. Do nothing if there is only one or no elements).	|
|**sb**	|**swap** the first two elements at the top of stack b. Do nothing if there is only one or no elements).	|
|**ss**	|**sa** and **sb** at the same time.										|
|**pa**	|**pop** the first element at the top of stack b and **push** it at the top of a. Do nothing if b is empty.	|
|**pb**	|**pop** the first element at the top of stack a and **push** it at the top of b. Do nothing if b is empty.	|
|**ra**	|**rotate** stack a by 1. The first element becomes the last one.						|
|**rb**	|**rotate** stack b by 1. The first element becomes the last one.						|
|**rr**	|**ra** and **rb** at the same time.										|
|**rra**|**reverse rotate** stack a by 1. The last element becomes the first one.					|
|**rrb**|**reverse rotate** stack a by 1. The last element becomes the first one.					|
|**rrr**|**rra** and **rrb** at the same time.										|

## Sorting example

```
-------------------------------------------------------------------------------------------------------
Init a and b:
4
3
1
2
5
6
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec sa and pb:
4 3
1
2
5
6
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec sa and pb:
4 1
2 3
5
6
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec ss:
2 3
4 1
5
6
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec pa:
3 1
2
4
5
6
_ _
a b
-------------------------------------------------------------------------------------------------------
Exec sa:
2 1
3
4
5
6
_ _
a b 
-------------------------------------------------------------------------------------------------------
Exec pa:
1
2
3
4
5
6
_ _
a b 
-------------------------------------------------------------------------------------------------------
```

## Checker
* You have to write a program named checker, which will get as an argument the
stack a formatted as a list of integers. The first argument should be at the top of
the stack (be careful about the order). If no argument is given checker stops and
displays nothing.
* Checker will then wait and read instructions on the stdin, each instruction
will be followed by newline separator. Once all the instructions have been read, checker will
execute them on the stack received as an argument.
* After executing those instructions, if stack a is actually sorted and b is empty, then
checker must display "OK" followed by a newline separator on the stdout.
Otherwise, checker must display "KO" followed by a newline separator on the stdout.
* In case of error, you must display Error followed by a newline separator on the stderr.
Errors include for example: some arguments are not integers, some arguments are
bigger than an integer, there are duplicates, an instruction don’t exist and/or is
incorrectly formatted.

## Checker example
```
$>./checker 1 4 3 2
pb
sa
pb
sa
pa
sa
pa
>> OK
$>./checker 3 2 1 0
pb
sa
pb
ctrl + D
>> KO
$>./checker 3 2a
>> Error
```

## push_swap
* You have to write a program named push_swap which will receive as an argument
the stack a formatted as a list of integers. The first argument should be at the top
of the stack (be careful about the order).
* The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top.
* Instructions must be separaed by a ’\n’ and nothing else.
* The goal is to sort the stack with the minimum possible number of operations.
During defence we’ll compare the number of instructions your program found with
a maximum number of operation tolerated. If your program either displays a list
too big or if the list isn’t sorted properly, you’ll get no points.
* In case of error, you must display Error followed by a ’\n’ on the standard error.
Errors include for example: some arguments aren’t integers, some arguments are
bigger than an integer, and/or there are duplicates.

#### Pushswap Example
```
$>./push_swap 2 1 3 6 5 8
ra
pb
pb
sa
pa
rra
pa
$>./push_swap 0 one 2 3
Error
$>
```

### Execution example
```
$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
7
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
OK
$>
```
