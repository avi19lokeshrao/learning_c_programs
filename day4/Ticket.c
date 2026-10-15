#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

typedef struct { 
    long num; 
    char reg[50]; 
    float gross; 
    float tare; 
} Ticket; 

float getnet(const Ticket *t) { 
    return t->gross - t->tare; 
} 

void print(const Ticket *t) { 
    printf("%ld %s gross %.2f tare %.2f\n", t->num, t->reg, t->gross, t->tare); 
    printf("net %.2f\n", getnet(t)); 
} 

int main() { 
    int n; 
    printf("Enter number of vehicles:\n"); 
    if (scanf("%d", &n) != 1) {
        return 1;
    } 
    
    if (n <= 0 || n > 100000) { 
        printf("INVALID COUNT\n"); 
        return 0; 
    } 
    
    Ticket *tic = (Ticket *)malloc(n * sizeof(Ticket)); 
    if (tic == NULL) { 
        return 1; 
    } 
    
    printf("Enter ticket number, vehicle registration, gross weight and tare weight:\n"); 
    for (int i = 0; i < n; i++) { 
        scanf("%ld %s %f %f", &tic[i].num, tic[i].reg, &tic[i].gross, &tic[i].tare); 
    } 
    
    printf("WEIGHBRIDGE DAY BOOK\n"); 
    float weight = 0.0; 
    int index = 0; 
    float max = -1.0; 
    
    for (int i = 0; i < n; i++) { 
        print(&tic[i]); 
        float currentnet = getnet(&tic[i]); 
        weight += currentnet; 
        
        

        if (currentnet > max) { 
            max = currentnet; 
            index = i; 
        } 
    } 
    
    printf("Tickets: %d\n", n); 

    printf("Total net weight (kg): %.2f\n", weight); 
    printf("Heaviest net load: ticket %ld %s\n%.2f\n", tic[index].num, tic[index].reg, max); 
    
    free(tic); 
    return 0; 
}
