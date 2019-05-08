import os
import pygame
import sys

from pygame.local import *
pygame.int()
DISPLAYSURF = pygame.display.set_mode((300, 300))
pygame.display.set_caption('Fuck You')
while True:
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            sys.exit()

    pygame.display.update()