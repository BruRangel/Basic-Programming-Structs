import os
import random

# Defining the suits and values of the card deck
suits = ['Hearts', 'Diamonds', 'Clubs', 'Spades']
values = ['2', '3', '4', '5', '6', '7', '8', '9', 'Jack', 'Queen', 'King', 'Ace']

# Creating a deck of cards as a list of tuples
deck = [(value, suit) for suit in suits for value in values]
print(random.choice(deck))
