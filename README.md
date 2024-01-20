<h1 align="center">
	🔄 push_swap
</h1>

<p align="center">
	<b><i>Because Swap_push isn’t as natural</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/juwkim/push_swap?color=lightblue">
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/juwkim/push_swap?color=yellow">
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/juwkim/push_swap?color=blue">
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/juwkim/push_swap?color=green">
</p>

<h3 align="center">
	<a href="#-about-the-project">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#game-rules">Game rules</a>
	<span> · </span>
	<a href="#push_swap">push_swap</a>
	<span> · </span>
	<a href="#checker">checker</a>
	<span> · </span>
	<a href="#performance-average-of-100-tests">performance</a>
</h3>

## 💡 About the project

> _This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the most appropriate solution (out of many) for an
optimized data sorting._

	This project consists of coding a program that finds the lowest possible number of moves to
	sort a random list of integers using 2 stacks and a limited set of operations  

For more detailed information, look at the [**subject of this project**](https://github.com/juwkim/42cursus/blob/main/Subject%20PDFs/02_push_swap.pdf).

## 🛠️ Usage

- Pull files ↙️
```shell
$ git clone --recursive https://github.com/juwkim/push_swap
```

- To build push_swap ↙️
```shell
$ make
```

- To build push_swap & checker ↙️
```shell
$ make bonus
```

- To use tester ↙️
```shell
$ make test
```

- To check this repository complies with [norminette](https://github.com/42School/norminette) ↙️
```shell
$ make norm
```

## Execution example
```shell
$ ARG="4 3 1 2 5 6"; ./push_swap $ARG | wc -l
>> 8
$ ARG="4 3 1 2 5 6"; ./push_swap $ARG | ./checker $ARG
>> OK
```

## Game rules

* The game is composed of two stacks named a and b.
* Stack a contains a random number of either positive or negative numbers without any duplicates.
* Stack b is empty.
* The goal is to sort stack a in ascending order.
* To do this you have to use the following operations at your disposal.

|Command|Description													|
|:---:	|:---														| 
|**sa**	|**swap** the first two elements at the top of stack a. Do nothing if there is only one or no elements.		|
|**sb**	|**swap** the first two elements at the top of stack b. Do nothing if there is only one or no elements.		|
|**ss**	|**sa** and **sb** at the same time.										|
|**pa**	|**pop** the first element of stack b and **push** it at the top of a. Do nothing if b is empty.		|
|**pb**	|**pop** the first element of stack a and **push** it at the top of b. Do nothing if b is empty.		|
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

## push_swap
* A program named **push_swap** which receives a list of integers into the stack a. The first argument should be at the top of the stack a.
* The program must display the smallest list of instructions possible to sort stack a as ascending order
* Instructions must be separaed by a newline separator and nothing else.
* The goal is to sort the stack a with the minimum possible number of operations.
* In case of error, you must display Error followed by a newline separator on the stderr.
* Errors include for example: some arguments are not integer, some arguments are bigger than integer, and/or there are duplicates.

### push_swap example
```shell
$>./push_swap 4 3 1 2 5 6
>> sa
>> pb
>> sa
>> pb
>> ss
>> pa
>> sa
>> pa

$>./push_swap 3 2a
>> Error
```

## checker
* A program named **checker** which receives a list of integers into the stack a. The first argument should be at the top of the stack a.
* If no argument is given checker stops and displays nothing.
* Checker will then wait and read instructions on the stdin, each instruction will be followed by newline separator. Once all the instructions have been read, checker will execute them on the stack received as an argument.
* After executing those instructions, if stack a is actually sorted and b is empty, then
checker must display "OK" followed by a newline separator on the stdout.
* In case of error, **checker** must display "Error" followed by a newline separator on the stderr.
* Errors include for example: some arguments are not integer, some arguments are bigger than integer, and/or there are duplicates.

### checker example
```shell
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

## Performance (Average of 100 tests)
```
Random list of five numbers:
Average 8 (Min: 0 Max: 12)

Random list of one hundred numbers:
Average 555 (Min: 529 Max: 582)

Random list of five hundred numbers:
Average 3886 (Min: 3825 Max: 3955)

Random list of one thousand numbers:
Average 8733 (Min: 8612 Max: 8863)
```
![image](https://user-images.githubusercontent.com/66457470/213859577-56fabe9b-671f-4cf3-b0fc-6bd538ba98f3.png)
