#!/bin/bash
spinner() {
    local i sp n
    sp='◷ ◶ ◵ ◴ '
    n=${#sp}
    while sleep 0.1; do
        printf "%44s\n" "${sp:i++%n:6}"
   done
}

printf "%29sThis is Armenia%s\n"
spinner &

sleep 10  # sleeping for 10 seconds is important work

kill "$!" # kill the spinner
printf '\n'
