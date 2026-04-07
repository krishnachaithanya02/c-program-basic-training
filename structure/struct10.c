#include <stdio.h>
void update();

struct student {
int id;
float marks;
};

int main()
{
struct student s = {007,50};
update (&s);
printf("id after function call=%d\n",s.id);
printf("marks after function call=%.4f\n",s.marks);

return 0;
}

void update(struct student *s)
{
s->id=8;
s->marks =100;
}
