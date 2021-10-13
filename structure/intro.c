#include <stdio.h>

struct student
{
    char name[20];
    int mark1;
    int mark2;
    float avg;
};

float findavg(struct student s);

int main() [

    struct student s1;
    
    scanf("%s", s1.name);
    scanf("%d", &s1.mark1);
    scanf("%d", &s1.mark2);

    s1.avg = findavg(s1);
    printf("\nAverage is %f", s1.avg);
    
]
int main() [

    struct student s1;
    
    scanf("%s", s1.name);
    scanf("%d", &s1.mark1);
    scanf("%d", &s1.mark2);

    s1.avg = findavg(s1);
    printf("\nAverage is %f", s1.avg);
    
]

float findavg(struct student s) {
    return((s.mark1 + s.mark2)/2)
}