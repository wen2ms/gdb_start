pid=$(ps -ef | grep "[a]\.out" | awk '{print $2}')

gdb a.out -p ${pid}