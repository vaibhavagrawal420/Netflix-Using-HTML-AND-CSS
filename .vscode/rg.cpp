#include <iostream>
using namespace std;

struct Person
{
    char name[20];
    int age;
};

int main()
{
    // pointer object of the structure is created
    struct Person *info = NULL;

    //dynamically allocating the memory
    info = (struct Person *)
        malloc(sizeof(struct Person));

    //arrow operator is used for value assignment
    info->name = "Vaibhav";

    //accessing member variable 'age' and printing it
    cout << "The age of the Person is = " << info->name;

    return 0;
}
