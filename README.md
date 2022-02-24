# Makefile & zombie process

## Atividade: infraestrutura de software
Aluno: João Pedro Cordeiro Abrantes  
Período: 3  
Turma: B  
Professor: Erico Souza Teixeira  
Tutor: Michael Alves  

This repository has a C program that creates a zombie process when executed and also a makefile to make things easier

## Clone project

In order to run the program, you need to clone this repository by running the following commands in your terminal

```bash
$ git clone https://github.com/jpedro7/makefile-zombieProcess.git
$ cd makefile-zombieProcess
```

## Run code

To execute the program, use the following commands in your terminal

```bash
$ make
```
The `make` command will compile, run and delete the target file

```bash
$ make bin
```
The `make bin` command will only compile the code

```bash
$ make run
```
The `make run` command will only run the compiled file

```bash
$ make clean
```
The `make clean` command will delete the compiled file