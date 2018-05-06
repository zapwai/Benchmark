N=$1
procedure(){
    for ((i=0;i<N;i++));
    do
	A=$RANDOM
	B=$RANDOM	
	U=$(echo "$A/32767" | bc -l)
	W=$(echo "$B/32767" | bc -l)
	# box muller transform
	# Z = sqrt(-2 ln(U))*sin(2piW)
	Z=$(echo "sqrt(-2*l($U))*s(6.283184*$W)" | bc -l)
	echo $Z
    done
}

time procedure
