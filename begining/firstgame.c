#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int SnakeWaterGun(char you, char comp){

    if (you==comp){
       return 0;
    }    
    
    if (you== 's' && comp== 'g'){
    return -1;
    } 
    else if (you== 'g' && comp== 's')
    return 1;
    
    if (you== 's' && comp== 'w'){
        return 1;
    }
    else if (you== 'w' && comp== 's')
    return -1;
    
    if (you== 'g' && comp== 'w'){
    return -1;
    }
    else if (you== 'w' && comp== 'g')
    return 1;
}

int main (){
    char you, comp;
    srand(time(0));
    int number= rand()%100 +1; 
    
    if (number<33){
        comp = 's';
    }
    
    else if (number>33 && number<66){
        comp= 'w';
    }

    else{
        comp= 'g';
    }
    printf("Welcome to Snake, Water & Gun GAME\n");
    printf("Enter 's' for Snake, 'w' for Water, & 'g' for Gun\n");
    scanf("%c", &you);
    int result= SnakeWaterGun(you, comp);
        
    if (result== 0)
    printf("Game Draw!!!\n");
    
    else if (result== -1)
    printf ("You Lose\n");
    
    else 
    printf("You Won\n");

    printf("You entered %c and computer chose %c.", you, comp);
    
    return 0;
}