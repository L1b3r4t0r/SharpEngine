# Copyright (C)Matheus 2015
# For file formats specifications see the FILEFORMATS file.
# Feel free to implement the file formats used in this engine in your own projects.

import base64
import json
import argparse

# Main code
# Arguments parsing
# Read the documentation before using this script
print('Copyright (C)Matheus 2015\nFor file formats specifications see the FILEFORMATS file.\nFeel free to implement the file formats used in this engine in your own projects.\n')
arg = argparse.ArgumentParser()
arg.add_argument('file', default="*", help='a file/directory to bank accepts wildcard paths like path/to/folder/*')
arg.add_argument('--new-bank', help='be cautious this will overwrite any existing project(s) with the same name')
open(file, mode='w+', buffering=-1, encoding=None, errors=None, newline=None, closefd=True)
