def compundinterset(principal = 0, time = 0, rate = 0):
    amount  = principal*(1+rate/100)**time
    ci = amount - principal
    return ci

compundinterset(2000,3,12)
