#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <time.h>

#define N 20
//This is modified from github
typedef struct{

	int max;
	int min;
	char rname[20];

}rock; 
//this is for function prototypes
void send_data(rock); 
