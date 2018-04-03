# Starry Night Interactive Painting
We propose making an interactive version of Van Gogh's Starry Night, which invites the user to blow on the painting, triggering LEDs behind the painting to blink in different patterns, resembling the movement of stars and wind. The bottom right of the painting includes a town with houses that will also have LEDs that turn on and off to mimic people moving about the town. 

## Summary
The main goal of the project is to incorporate interactive elements into Van Gogh’s Starry Night through the use of LEDs and sound sensors positioned behind a semi-transparent printout of the painting. The audience will first blow into a small microphone on the left side of the painting, positioned behind the gust of wind. This will trigger a succession of LEDs to light up across the painting from left to right. First, a line of LEDs will light up throughout the gusts of wind, then fade away. Next, the center of the stars will light up and the lights surrounding the centers will light up and fade, mimicking a glowing effect. Finally, the lights in the houses will light up and fade. 

One of the greatest parts of the Starry Night is its depiction of the turbulence in the sky from wind or eddys and how the light from that star diffuses through that sky. The turbulence in his paintings mimic the mathematical formulas that physicists studying fluid dynamics have derived. Capturing that in a new form, with actual lights and human interaction will hopefully highlight this aspect in a new light (pun intended). 

## Component Parts
The Van Gogh painting will be printed on a large sheet of paper that will allow the light of the LEDs to diffuse through. Extra paper can be layered or cut out to allow different amounts of light through. 

Components:
Wooden frame and large sheet of semi-transparent paper to display painting
Sound sensor to detect user’s breath (INPUT)
LEDs, to resemble stars (OUTPUT)

### Block Diagram
![alt text](https://raw.githubusercontent.com/ayau3/Final-Project/master/Screen%20Shot%202018-04-03%20at%204.40.49%20PM.png)
![alt text](https://raw.githubusercontent.com/ayau3/Final-Project/master/Screen%20Shot%202018-04-03%20at%204.41.29%20PM.png)

## Challenges

1. The configuration of all of the LEDs and keeping track of which LED is what when programming how they turn on and off
2. Learning how to implement sensors that translate sound into the ‘movement’ of a network of LEDs
3. Printing out a large-scale version of the painting on somewhat transparent paper that will get the right type of light diffusion 


## Timeline

- Week 1: Write proposal 
- Week 2: Purchase necessary sensors and LEDS and create a mockup of where we want all of the LEDs to be. 
- Week 3: Program sensors and finalize layout of LEDs
- Week 4: Print painting, create frame, assemble all components + time for any unexpected debugging
- Week 5: Present!

## References and Links
1. A similar interactive painting that allows a user to blow on dandelion lights that are painted using a traditional Chinese brush painting style: https://vimeo.com/40904471 
2. Research on the meaning and inspiration behind the original starry night:
3. https://www.moma.org/learn/moma_learning/vincent-van-gogh-the-starry-night-1889 
  - “This morning I saw the countryside from my window a long time before sunrise, with nothing but the morning star, which looked very big,” wrote van Gogh to his brother Theo, describing his inspiration for one of his best-known paintings, The Starry Night (1889). 
4. http://mentalfloss.com/article/62621/11-things-you-didnt-know-about-starry-night
  - This connection gives a special significance to this van Gogh quote, "Looking at the stars always makes me dream. Why, I ask myself, shouldn't the shining dots of the sky be as accessible as the black dots on the map of France? Just as we take the train to get to Tarascon or Rouen, we take death to reach a star."
5. TED Ed: The Unexpected Math behind The Starry Night: https://www.youtube.com/watch?v=PMerSm2ToFY
