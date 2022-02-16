find . -name "*.sh" | sed 's/.*\///g' | cut -f1 -d '.'
