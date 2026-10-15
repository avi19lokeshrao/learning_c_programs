#include <stdio.h>
#include <stdlib.h>

typedef struct Adr
{
    char vil[100];
    int pin;
};

typedef struct Member
{
    int id;
    char name[100];
    float capital;
    struct Adr address;
};

int main()
   {
    int n;
    printf("Enter number of members :\n");
    scanf("%d",&n);
    if (n<=0||n>200)
	{
        printf("Invalid members count \n");
        return 0;
    }

    struct Member m[200];
    float cap= 0.0;
    int high= 0;
    printf("Enter ID , NAME , CAPITAL , VILLAGE , PINCODE :\n");
    for (int i = 0; i < n; i++)
	{
        scanf("%d %s %f %s %d", 
              &m[i].id, 
              m[i].name, 
              &m[i].capital, 
              m[i].address.vil, 
              &m[i].address.pin);
        
        cap+= m[i].capital;

        if (m[i].capital > m[high].capital) {
            high = i;
        }
    }

    printf("Member list \n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %s %d %.2f\n", 
               m[i].id, 
               m[i].name, 
               m[i].address.vil, 
               m[i].address.pin, 
               m[i].capital);
    }

    printf("Total share capital : %.2f\n", cap);
    printf("Highest holder: %d %s %s %d %.2f\n", 
           m[high].id, 
           m[high].name, 
           m[high].address.vil, 
           m[high].address.pin, 
           m[high].capital);

    return 0;
}
