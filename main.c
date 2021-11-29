#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    
    printf("Choose option:\n1. First Come first serve\n2. Shortest Job First\n3. Round Robin scheduling\n4. Priority CPU Scheduling\n5. Exit\n");
    int a;
    scanf("%d",&a);
    
switch (a)
    {
    case 1:
        execl("./fifo","./fifo",NULL);
        break;
    case 2:
        execl("./sjf","./sjf",NULL);
        break;
    case 3:
        execl("./round","./round",NULL);
        break;
    
    case 4:
    execl("./priority","./priority",NULL);
        break;
    default:
        break;
    }
    
    
    return 0;
}