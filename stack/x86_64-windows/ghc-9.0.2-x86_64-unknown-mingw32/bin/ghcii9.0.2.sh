#!/bin/sh
exec "$(dirname "$0")"/ghc --interactive "$@"
