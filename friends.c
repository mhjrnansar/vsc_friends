#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get user's name and hobby
    string name = get_string("What's your name? ");
    string hobby = get_string("Do you have a hobby? ");

    // If hobby is "idk"
    if (strcmp(hobby, "idk") == 0 || strcmp(hobby, "no") == 0)
    {
        printf("It is important to have a hobby to make productive use of your leisure time.\n");
    }

    // Get user's age
    int age = get_int("What's your age? ");

    // Check if the age is 100
    if (age == 250)
    {
        age = get_int("Tell me your real age :/ ");
    }

    // Print a customized message based on the hobby
    if (strcmp(hobby, "idk") == 0 || strcmp(hobby, "no") == 0)
    {
        printf("So your name is %s, you are %i years old, and you... don't have a hobby?\n", name, age);
    }
    else
    {
        printf("So your name is %s, you are %i years old, and your hobby is %s.\n", name, age, hobby);
    }

    // Confirm if the details are correct
    while (true)
    {
        string right = get_string("Is that right? (yes/no): ");

        if (strcmp(right, "yes") == 0)
        {
            printf("Alright, noted!\n");
            break;
        }
        else if (strcmp(right, "no") == 0)
        {
            // Change details if incorrect
            while (true)
            {
                string mistake = get_string("Which detail needs to change? (name, hobby, or age): ");

                if (strcmp(mistake, "name") == 0)
                {
                    name = get_string("So, what's your name? ");
                }
                else if (strcmp(mistake, "hobby") == 0)
                {
                    hobby = get_string("Your hobby must be cool! So, what is it? ");
                }
                else if (strcmp(mistake, "age") == 0)
                {
                    age = get_int("What's your age then? ");
                }
                else if (strcmp(mistake, "nvm") == 0)
                {
                    printf("Alright, noted!\n");
                    break;
                }
                else
                {
                    printf("Please specify 'name', 'hobby', or 'age'.\n");
                    continue;
                }

                // Print updated details
                if (strcmp(hobby, "idk") == 0 || strcmp(hobby, "no") == 0)
                {
                    printf("So your name is %s, you are %i years old, and you... don't have a hobby?\n", name, age);
                }
                else
                {
                    printf("So your name is %s, you are %i years old, and your hobby is %s.\n", name, age, hobby);
                }
            }
        }
    }

    return 0;
}
