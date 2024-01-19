int currentMazeCell = 0;
int roomEvent;

void currentMaze(){
    clearScreen();
    switch (currentMazeCell)
    {
        case 1:
            clearScreen();
            switch (roomEvent)
            {
            case 1:
                maze1();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 4:
            clearScreen();
            switch (roomEvent)
            {
            case 1:
                maze4();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 5:
            clearScreen();
            switch (roomEvent)
            {
            case 1:
                maze5();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 9:
            clearScreen();
            switch (roomEvent)
            {
            case 1:
                maze9();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        default:
            mazeBegin();
            break;
    }
}



void mazeBegin(){
    clearScreen();
    printf("    \n");
    printf("\n\t=======================================================================================================");
    printf("\n\t| 12                    _ _  13                   _ _  14                   _ _  15                   |");
    printf("\n\t|                                                                                        EXIT         |");
    printf("\n\t|                       _ _                       _ _                       _ _                       |");
    printf("\n\t|                                                                                                     |");
    printf("\n\t===========|##|=====================|##|===============================================================");
    printf("\n\t|  8                    | |   9                   _ _  10                   _ _  11                   |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t|                       | |                       _ _                       _ _                       |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t====================================|##|=================================================|##|==========");
    printf("\n\t|  4                    _ _  5                    _ _  6                    | |  7                    |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t|                       _ _                       _ _                       | |                       |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t==========|###|=====================|##|=======================|  |======================|  |==========");
    printf("\n\t|  0                    _ _  1                    | |  2                    _ _  3                    |");
    printf("\n\t|          YOU                                    | |                                                 |");
    printf("\n\t|                       _ _                       | |                       _ _                       |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t=======================================================================================================\n");
    return;
}

void maze1(){
    clearScreen();
    printf("    \n");
    printf("\n\t=======================================================================================================");
    printf("\n\t| 12                    _ _  13                   _ _  14                   _ _  15                   |");
    printf("\n\t|                                                                                        EXIT         |");
    printf("\n\t|                       _ _                       _ _                       _ _                       |");
    printf("\n\t|                                                                                                     |");
    printf("\n\t===========|##|=====================|##|===============================================================");
    printf("\n\t|  8                    | |   9                   _ _  10                   _ _  11                   |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t|                       | |                       _ _                       _ _                       |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t====================================|##|=================================================|##|==========");
    printf("\n\t|  4                    _ _  5                    _ _  6                    | |  7                    |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t|                       _ _                       _ _                       | |                       |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t==========|###|=====================|##|=======================|##|======================|##|==========");
    printf("\n\t|  0                    _ _  1                    | |  2                    _ _  3                    |");
    printf("\n\t|                                    YOU          | |                                                 |");
    printf("\n\t|                       _ _                       | |                       _ _                       |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t=======================================================================================================\n");
    return;
}

void maze4(){
    clearScreen();
    printf("    \n");
    printf("\n\t=======================================================================================================");
    printf("\n\t| 12                    _ _  13                   _ _  14                   _ _  15                   |");
    printf("\n\t|                                                                                        EXIT         |");
    printf("\n\t|                       _ _                       _ _                       _ _                       |");
    printf("\n\t|                                                                                                     |");
    printf("\n\t===========|##|=====================|##|===============================================================");
    printf("\n\t|  8                    | |   9                   _ _  10                   _ _  11                   |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t|                       | |                       _ _                       _ _                       |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t====================================|##|=================================================|##|==========");
    printf("\n\t|  4                    _ _  5                    _ _  6                    | |  7                    |");
    printf("\n\t|          YOU                                                              | |                       |");
    printf("\n\t|                       _ _                       _ _                       | |                       |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t==========|###|=====================|##|=======================|##|======================|##|==========");
    printf("\n\t|  0                    _ _  1                    | |  2                    _ _  3                    |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t|                       _ _                       | |                       _ _                       |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t=======================================================================================================\n");
    return;
}

void maze5(){
    clearScreen();
    printf("    \n");
    printf("\n\t=======================================================================================================");
    printf("\n\t| 12                    _ _  13                   _ _  14                   _ _  15                   |");
    printf("\n\t|                                                                                        EXIT         |");
    printf("\n\t|                       _ _                       _ _                       _ _                       |");
    printf("\n\t|                                                                                                     |");
    printf("\n\t===========|##|=====================|##|===============================================================");
    printf("\n\t|  8                    | |   9                   _ _  10                   _ _  11                   |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t|                       | |                       _ _                       _ _                       |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t====================================|##|=================================================|##|==========");
    printf("\n\t|  4                    _ _  5                    _ _  6                    | |  7                    |");
    printf("\n\t|                                    YOU                                    | |                       |");
    printf("\n\t|                       _ _                       _ _                       | |                       |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t==========|###|=====================|##|=======================|##|======================|##|==========");
    printf("\n\t|  0                    _ _  1                    | |  2                    _ _  3                    |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t|                       _ _                       | |                       _ _                       |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t=======================================================================================================\n");
    return;
}

void maze9(){
    clearScreen();
    printf("    \n");
    printf("\n\t=======================================================================================================");
    printf("\n\t| 12                    _ _  13                   _ _  14                   _ _  15                   |");
    printf("\n\t|                                                                                        EXIT         |");
    printf("\n\t|                       _ _                       _ _                       _ _                       |");
    printf("\n\t|                                                                                                     |");
    printf("\n\t===========|##|=====================|##|===============================================================");
    printf("\n\t|  8                    | |   9                   _ _  10                   _ _  11                   |");
    printf("\n\t|                       | |          YOU                                                              |");
    printf("\n\t|                       | |                       _ _                       _ _                       |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t====================================|##|=================================================|##|==========");
    printf("\n\t|  4                    _ _  5                    _ _  6                    | |  7                    |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t|                       _ _                       _ _                       | |                       |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t==========|###|=====================|##|=======================|##|======================|##|==========");
    printf("\n\t|  0                    _ _  1                    | |  2                    _ _  3                    |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t|                       _ _                       | |                       _ _                       |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t=======================================================================================================\n");
    return;
}