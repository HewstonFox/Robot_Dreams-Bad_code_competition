# Robot_Dreams | Bad Code Competition - The Weird Rand

## Task

> Напишіть код, що генерує абсолютно випадкове число від 1 до 100… але без генератора випадкових чисел.

## The file for competition

`weird_rand.c`

### Explanation

The "algorithm" uses malloc to get a reference from the heap and interprets it as an int.\
Then, this value is aligned to be in the 1—100 (or -100 — -1) range.\
In the end, a positive value was returned.

## Launching

### Requirements

* gcc
* make

### Setup

```bash

# Clone the repo
git clone git@github.com:HewstonFox/Robot_Dreams-Bad_code_competition.git weird_rand

# Enter the source code folder
cd weird_rand

```

### Run tests

```bash

make test

```

### Cleanup

```bash
cd .. && rm -rf weird_rand
```
