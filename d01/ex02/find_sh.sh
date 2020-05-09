#!/bin/bash
find . -iname \*.sh | sed 's/\.sh$//' | sed 's|^./||'
