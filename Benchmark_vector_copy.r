a <- c(1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233)

ptm <- proc.time()
B<- c();
for (i in 1:length(a)){
    B[i]<-a[i]
}
proc.time() - ptm
print(B)

ptm <- proc.time()
C <- c(a);
proc.time() - ptm
print (C)