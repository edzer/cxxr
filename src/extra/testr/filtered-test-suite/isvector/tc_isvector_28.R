expected <- eval(parse(text="FALSE"));        
test(id=0, code={        
argv <- eval(parse(text="list(structure(list(y = c(-0.0561287395290008, -0.155795506705329, -1.47075238389927, -0.47815005510862, 0.417941560199702, 1.35867955152904, -0.102787727342996, 0.387671611559369, -0.0538050405829051, -1.37705955682861), x = c(TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE, TRUE, FALSE), z = 1:10), .Names = c(\"y\", \"x\", \"z\"), terms = quote(y ~ x * z), row.names = c(NA, 10L), class = \"data.frame\"), \"any\")"));        
.Internal(`is.vector`(argv[[1]], argv[[2]]));        
}, o=expected);        

