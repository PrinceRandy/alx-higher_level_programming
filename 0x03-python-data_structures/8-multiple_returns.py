#!/usr/bin/python3

def multiple_returns(sentence):
    if sentence != "":
        beginning_char = sentence[0]
    else:
        beginning_char = None
    return (len(sentence), beginning_char)
