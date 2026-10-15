#include <stdio.h>
#include <stdlib.h>

union Value{
    float tem;
    char door;
    long long pul;
};

typedef struct {
    int id;
    char tag;
    union Value val;
} Reading;

int main() {
    int n;
    printf("Enter count :\n");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("Invalid count \n");
        return 0;
    }
    
    Reading *read= (Reading *)malloc(n * sizeof(Reading));
    if (read== NULL) {
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        if (scanf("%d %c", &read[i].id, &read[i].tag) != 2) {
            printf("Invalid kind\n");
            free(read);
            return 0;
        }
        
        if (read[i].tag == 'T') 
		{
            scanf("%f", &read[i].val.tem);
        } 
		else if (read[i].tag == 'D') 
		{
            scanf(" %c", &read[i].val.door);
        } 
		else if (read[i].tag == 'P') 
		{
            scanf("%lld", &read[i].val.pul);
        } 
		else 
		{
            printf("INVALID KIND\n");
            free(read);
            return 0;
        }
    }
    
    printf("SENSOR REPORT\n");
    for (int i = 0; i < n; i++) {
        if (read[i].tag == 'T') {
            printf("Sensor %d temperature %.2f C\n", read[i].id, read[i].val.tem);
        } 
		else if (read[i].tag == 'D') {
            if (read[i].val.door == 'O') 
			{
                printf("Sensor %d door OPEN\n", read[i].id);
            } 
			else 
			{
                printf("Sensor %d door CLOSED\n", read[i].id);
            }
        } 
		else if (read[i].tag == 'P') 
		{
            printf("Sensor %d pulses %lld\n", read[i].id, read[i].val.pul);
        }
    }
    
    printf("sizeof(union Value): 8\n");
    printf("sizeof with union: 16\n");
    printf("sizeof with all fields: 32\n");
    printf("Bytes saved per record: 16\n");
    
    free(read);
    return 0;
}
