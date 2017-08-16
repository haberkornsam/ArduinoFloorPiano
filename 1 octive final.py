import serial
import pyglet

#variable that tells if the sound is playing or not
soundC4 = False
soundDb4 = False
soundD4 = False
soundEb4 = False
soundE4 = False
soundF4 = False
soundGb4 = False
soundG4 = False
soundAb4 = False
soundA4 = False
soundBb4 = False
soundB4 = False

#instruments availible: Piano, Trumpet
#Make sure first letter is capitalized
inst = 'Trumpet'

#each note is loaded into the program and saved for quick playback
c4Note = pyglet.media.load(inst + 'C4.wav', streaming = False)
db4Note = pyglet.media.load(inst + 'Db4.wav', streaming = False)
d4Note = pyglet.media.load(inst + 'D4.wav', streaming = False)
eb4Note = pyglet.media.load(inst + 'Eb4.wav', streaming = False)
e4Note = pyglet.media.load(inst + 'E4.wav', streaming = False)
f4Note = pyglet.media.load(inst + 'F4.wav', streaming = False)
gb4Note = pyglet.media.load(inst + 'Gb4.wav', streaming = False)
g4Note = pyglet.media.load(inst + 'G4.wav', streaming = False)
ab4Note = pyglet.media.load(inst + 'Ab4.wav', streaming = False)
a4Note = pyglet.media.load(inst + 'A4.wav', streaming = False)
bb4Note = pyglet.media.load(inst + 'Bb4.wav', streaming = False)
b4Note = pyglet.media.load(inst + 'B4.wav', streaming = False)

#players are created so that all multiple notes can be played at the same time
c4Player = pyglet.media.Player()
db4Player = pyglet.media.Player()
d4Player = pyglet.media.Player()
eb4Player = pyglet.media.Player()
e4Player = pyglet.media.Player()
f4Player = pyglet.media.Player()
gb4Player = pyglet.media.Player()
g4Player = pyglet.media.Player()
ab4Player = pyglet.media.Player()
a4Player = pyglet.media.Player()
bb4Player = pyglet.media.Player()
b4Player = pyglet.media.Player()

#add the notes to the players
c4Player.queue(c4Note)
db4Player.queue(db4Note)
d4Player.queue(d4Note)
eb4Player.queue(eb4Note)
e4Player.queue(e4Note)
f4Player.queue(f4Note)
gb4Player.queue(gb4Note)
g4Player.queue(g4Note)
ab4Player.queue(ab4Note)
a4Player.queue(a4Note)
bb4Player.queue(bb4Note)
b4Player.queue(b4Note)

#open the serial port - location of serial, baud rate (230400 bits/second)
ser = serial.Serial('/dev/cu.usbmodem1421', 230400)

def loop():
    #define globals for edit/acess
    global soundC4, soundDb4, soundD4, soundEb4, soundE4, soundF4, soundGb4, soundG4, soundAb4, soundA4, soundBb4, soundB4, inst
    # read the most recent byte from serial
    note = ser.read(1)
    if note == 'A':
        # if the 'c' key has changed and the sound is not playing...
        if soundC4 == False:
            #play the note
            c4Player.play()
            print 'a'
            soundC4 = True
        elif soundC4 == True:
            #pause the player... go to the next sound... add the note again
            c4Player.pause()
            c4Player.next()
            c4Player.queue(c4Note)
            soundC4 = False
    if note == 'B':
        if soundDb4 == False:
            db4Player.play()
            print 'b'
            soundDb4 = True
        elif soundDb4 == True:
            db4Player.pause()
            db4Player.next()
            db4Player.queue(db4Note)
            soundDb4 = False
    if note == 'C':
        if soundD4 == False:
            d4Player.play()
            print 'c'
            soundD4 = True
        elif soundD4 == True:
            d4Player.pause()
            d4Player.next()
            d4Player.queue(d4Note)
            soundD4 = False
    if note == 'D':
        if soundEb4 == False:
            eb4Player.play()
            print 'd'
            soundEb4 = True
        elif soundEb4 == True:
            eb4Player.pause()
            eb4Player.next()
            eb4Player.queue(eb4Note)
            print 'eb stopped'
            soundEb4 = False
    if note == 'E':
        if soundE4 == False:
            e4Player.play()
            print 'e'
            soundE4 = True
        elif soundE4 == True:
            e4Player.pause()
            e4Player.next()
            e4Player.queue(e4Note)
            soundE4 = False
    if note == 'F':
        if soundF4 == False:
            f4Player.play()
            print 'f'
            soundF4 = True
        elif soundF4 == True:
            f4Player.pause()
            f4Player.next()
            f4Player.queue(f4Note)
            soundF4 = False
    if note == 'G':
        if soundGb4 == False:
            gb4Player.play()
            print 'g'
            soundGb4 = True
        elif soundGb4 == True:
            gb4Player.pause()
            gb4Player.next()
            gb4Player.queue(gb4Note)
            soundGb4 = False 
    if note == 'H':
        if soundG4 == False:
            g4Player.play()
            print 'h'
            soundG4 = True
        elif soundG4 == True:
            g4Player.pause()
            g4Player.next()
            g4Player.queue(g4Note)
            soundG4 = False
    if note == 'I':
        if soundAb4 == False:
            ab4Player.play()
            print 'i'
            soundAb4 = True
        elif soundAb4 == True:
            ab4Player.pause()
            ab4Player.next()
            ab4Player.queue(ab4Note)
            soundAb4 = False
    if note == 'J':
        if soundA4 == False:
            a4Player.play()
            print 'j'
            soundA4 = True
        elif soundA4 == True:
            a4Player.pause()
            a4Player.next()
            a4Player.queue(a4Note)
            soundA4 = False
    if note == 'K':
        if soundBb4 == False:
            bb4Player.play()
            print 'k'
            soundBb4 = True
        elif soundBb4 == True:
            bb4Player.pause()
            bb4Player.next()
            bb4Player.queue(bb4Note)
            soundBb4 = False
    if note == 'L':
        if soundB4 == False:
            b4Player.play()
            print 'l'
            soundB4 = True
        elif soundB4 == True:
            b4Player.pause()
            b4Player.next()
            b4Player.queue(b4Note)
            soundB4 = False     
    # call the function again (I have not experienced problems with max recursion)        
    loop()
#call the function for the first time after varibles are assigned.
loop()