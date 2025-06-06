file="$1"
cd /
if [ ! -e "$file" ]; then
    echo "net file: $file"
    exit 1
fi
#read -p " file " file
log="$file"
#poschital ne pustiye stroki
nstr=$(grep -c '[^[:space:]]' $log)
#poschital ne pustiye fily
unifile=$(cut -d ' ' -f1 $log | sort | uniq | wc -l)

log1=$(cut -d ' ' -f1,8 $log | sort -k1,1 -t ' ' -n -s | uniq)
for el in "${log1[@]}"; do
echo "${el}" > /home/mariloue/T02D02.ID_239610-1/src/temp.log
# #luto ahuevayu
n=1
N=2
unihash=-1
strok1=$(sed -n "${n}p" /home/mariloue/T02D02.ID_239610-1/src/temp.log )
strok2=$(sed -n "${N}p" /home/mariloue/T02D02.ID_239610-1/src/temp.log )

stroka2=$( cut -d ' ' -f2 <<< $strok2 )

while [ -n "$stroka2" ]
   do
    strok1=$(sed -n "${n}p" /home/mariloue/T02D02.ID_239610-1/src/temp.log )
    strok2=$(sed -n "${N}p" /home/mariloue/T02D02.ID_239610-1/src/temp.log )
    stroka1=$(cut -d ' ' -f2 <<< $strok1 )
    stroka2=$(cut -d ' ' -f2 <<< $strok2 )
    if [ "$stroka1" != "$stroka2" ]; then
    unihash=$((unihash+1))

    else
    unihash=$((unihash+0))

    fi
    n=$((n+1))
    N=$((N+1))
 done
 done
echo "${nstr}  ${unifile}  ${unihash}"
