# Casino-Betting-Game-in-C
A betting Game in C programming where player wins the bet by guessing the position of the queen

The player starts the game with initial virtual cash of ksh 100

The computer shuffles the positions of the cards(Jack, Queen, King).

If player correctly says the position of Queen : wins double the betted amount 

If he loses : the betted amount is deducted from his virtual cash
# Conditions:
-Player not allowed to quit from the game until he plays atleast 4 times ;that is when he's given the option to quit or continue,
this is to reduce the probability of player winning (otherwise the betting game would be an easy way to win money) _i.e if given option of quitting at the first attempt or even second then player can quit the game with quite a fit even though he/she moght have lost all one/two attempts_

-If cash of player reaches 0 ,he cannot continue and is exited from the game

-Player cannot bet an amount more than what he has

-Player cannot make a bet of ksh 0.

-Upon exit the player is shown the amount of cash won.
