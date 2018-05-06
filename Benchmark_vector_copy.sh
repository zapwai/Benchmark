procedure(){
    b=()
    for i in ${!a[@]}
    do	 
	b[i]+=${a[i]}
    done

}

procedure2(){
    c=("${a[@]}")
}

a=(1 1 2 3 5 8 13 21 34 55 89 144 233)
time procedure
time procedure2

echo "a:" ${a[*]}
echo "b:" ${b[*]}
echo "c:" ${c[*]}
