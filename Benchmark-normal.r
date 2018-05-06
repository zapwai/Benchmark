args<-commandArgs(TRUE)

if (length(args) == 1) {
   N <- args[1]
} else {
   N <- 10
}
g <- rnorm(N)

ptm <- proc.time()

for (i in 1:N){
    print(g[i])
}

proc.time() - ptm