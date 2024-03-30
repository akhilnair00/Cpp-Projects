/* 

- Game will take place in a dumbed down reality. over the course of one day
- I wil be the main character going about my day making choices
- There will be choices throughout the day where the player will get to choose what to do that impacts the ending

Story: 

Choice #1: 
1. Get Ready for Work.
    - Get ready and head to work.
    - Talk to boss regarding weird clients.
    - Head to board room, greasy fellow is sitting there.
    - He yaps about something, leads to choice 2a which will inevitable lead to 
2. Lay in bed.
    - Leads to the alien story function
    - You stare outside your window from bed and notice a strangeness in the hue of the sky.
    - A bright white light nearly blinds you and your vision gets blurry as the sound of breaking glass occurs.
    - 
3. Go back to sleep.

3. leads to the dream story function

4. alien2 happens in both work and alien but not dream.
*/

#include <stdio.h>
#include <iostream>

int work(){
    int choice1a = 0;
    
    std::cout << "You jump out of bed. You're not late, but it's a big day.\n";
    std::cout << "You quickly get ready in your nicest outfit.\n";
    std::cout << "The sky has a greenish hue. You hop onto your bike and reach work in 20 minutes.\n";
    
    std::cout << "Your boss is waiting at your desk.";
    std::cout << "\"The man's waiting inside... please resolve this quickly.\"\n";
    std::cout << "You look at the room wondering what could make the boss sweat. You proceed to enter the room.";
    
    std::cout << "A greasy man awaits you. He starts to speak when...\nTO BE CONTINUED\n\n";

    std::cout << "DEV NOTE: I probably won't come back to this, but if I do, I do have a story I want to finish!\n";
    std::cout << "I leave you with one final choice.\n";

    std::cout << "[1] This is a waste of time.\n[2] It always has been.\n[3] Such is life.\n[4] I see all.\n";
    int mad = 0;

    do{
        std::cout << "Pick something.\n";
        std::cin >> choice1a;
        if (choice1a < 1 || choice1a > 4){
            std::cout << "Enter a valid choice.";
            mad++;
            if (mad > 3){
                std::cout << "PICK THE RIGHT NUMBER.";
            }
        }
    } 
    while(choice1a < 1 || choice1a > 4);
    

    switch (choice1a)
    {
    case 1:
        std::cout << "All the options lead to the same road. You're awesome!";
        break;
    case 2:
        std::cout << "All the options lead to the same road. You're awesome!";
        break;
    case 3:
        std::cout << "All the options lead to the same road. You're awesome!";
        break;
    case 4:
        std::cout << "All the options lead to the same road. You're awesome!";
        break;
    case 5:
        std::cout << "Not an option.";
        break;
    default:
        break;
    }



    return 0;
}

int alien(){
    return 0;
}

int dream(){
    return 0;
}

int alienphase2(){
    return 0;
}


int main(){

    std::cout << "Hello and welcome to your life.\nYou are you and you will play this game.\n\n\n";

    int choice1 = 0;
    int choice2 = 0;
    int choice3 = 0;

    std::cout << "You awake at 7 o'clock... It's a gloomy day outside. What do you do next?\n\n";
    std::cout << "[1] Get out of bed and get ready for work.\n[2] Lay in bed.\n[3] Go back to sleep.\n";

    do{
        std::cin >> choice1;
        if (choice1 < 1 || choice1 > 3){
            std::cout << "Enter a valid choice.";
        }
    } 
    while(choice1 < 1 || choice1 > 3);
    
    if (choice1 == 1)
    {
        work();
    }
    else if (choice1 == 2)
    {
        alien();
    }
    else if (choice1 == 3)
    {
        dream();
    }
    
    std::cout << "End of story.";

}
