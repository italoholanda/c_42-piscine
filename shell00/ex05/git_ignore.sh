#!/bin/sh

git status --ignored -s | awk '/!!/ {print $2}'
