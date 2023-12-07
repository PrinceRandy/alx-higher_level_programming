#!/usr/bin/python3

if __name__ == "__main__":
    """Print all names defined by hidden_4 module."""
    import hidden_4

    NAMES = dir(hidden_4)
    for NAME in NAMES:
        if NAME[:2] != "__":
            print(NAME)
