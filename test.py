def foo():
        a=10
        b=20
        c=30
        r=a*b+c
        return r

import dis
dis.dis(foo)
