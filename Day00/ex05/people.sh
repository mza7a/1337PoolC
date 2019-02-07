ldapsearch -xLLL -u "uid=z*" | sort -r | grep "cn:"| cut -c 5-
