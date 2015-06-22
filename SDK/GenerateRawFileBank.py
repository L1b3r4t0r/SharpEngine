 Copyright (C)Matheus 2015
# For file formats specifications see the FILEFORMATS file.
# Feel free to implement the file formats used in this engine in your own projects.

import base64
import json
import argparse as argp

# Main code
# Arguments parsing
parser = argp.ArgumentParser(description='Prepare files and folders for banking')
parser.add_argument('integers', metavar='S', type=string, nargs='+', help='A file/directory to bank accepts wildcard paths like path/to/folder/*')
