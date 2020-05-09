ifconfig | sort | grep -w 'ether' | sed 's/ether //g'
